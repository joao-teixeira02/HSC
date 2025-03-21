#include "pixel_proc.h"

// Context information for block of frames
class Context
{

	word_type sum_before;
	word_type sum_after;
	word_type values;
	ap_uint<22> histogram[256];
	word_type _empty_data[256];

	flag_type _empty_data_ready;
	enum
	{
		Start,
		Read,
		Wait,
		Write
	} state;

public:
	Context()
{
		sum_before = sum_after = 0;
		values = 0;
		_empty_data_ready = 0;
		state = Start;
}

	// Active processing of image data by the context
	void active(color_type &new_val, color_type val)
	{
#pragma HLS ARRAY_PARTITION variable=histogram cyclic factor=64
		state = Start; // reset to starting state of update procedure
		histogram[val]++;
		values += 1;
		sum_before += val;
		if (_empty_data_ready)
		{
			new_val = _empty_data[val];
		}
		else
		{
			new_val = val;
		}
		sum_after += new_val;
	}

	// Background update procedure of context's internal data (FSM)
	void update(flag_type start, word_type &sb, word_type &sa, word_type &v, word_type sm[256], flag_type &rd, flag_type wr)
	{
#pragma HLS ARRAY_PARTITION variable=_empty_data cyclic factor=64 dim=1
#pragma HLS ARRAY_PARTITION variable=sm cyclic factor=64 dim=1

		static color_type address_counter;
		switch (state)
		{
		// waiting for the first pixel of frame block (indicated by start flag)
		case Start:
			if (start)
			{
				state = Read;
				address_counter = 0; // reset values for the following Read state
				rd = 0;
				_empty_data_ready = 0;
			}
			break;
			// reading of histogram values and copying them into shared memory
		case Read:
			sb = sum_before; // make debug sums accessible
			sa = sum_after;
			v = values;
			sm[address_counter] = histogram[address_counter]; // copy histogram into shared memory (value-by-value)
			histogram[address_counter] = 0;                   // clear histogram data
			if (address_counter == 255)
			{                   // last histogram value copied into shared memory
				state = Wait;   // now we need to wait for data from PS
				sum_before = 0; // clear debug sums
				sum_after = 0;
				values = 0;
				rd = 1; // confirm shared memory data ready for PS
			}
			address_counter++; // address increment
			break;
			// waiting for data confirmation from PS
		case Wait:
			if (wr)
			{
				state = Write;
				address_counter = 0; // reset values for the following Write state
				rd = 0;

			}
			break;
			// write data from shared memory into local array
		case Write:
			_empty_data[address_counter] = sm[address_counter];
			if (address_counter == 255)
			{ // last value copied from shared memory
				state = Start;
				_empty_data_ready = 1; // confirm correct copy of all data
			}
			address_counter++;
			break;
		}
	}
};

const fixed_t MATRIX_BGR2YCrCb[3][3] = {
		{0.114, -0.081312, 0.5},
		{0.587, -0.418688, -0.331264},
		{0.299, 0.5, -0.168736}};

void pixel_convert_BGR2YCrCb(
		color_type B, color_type G, color_type R,
		fixed_t &Y, fixed_t &Cr, fixed_t &Cb)
{
	Y = MATRIX_BGR2YCrCb[0][0] * B + MATRIX_BGR2YCrCb[1][0] * G + MATRIX_BGR2YCrCb[2][0] * R;
	Cr = MATRIX_BGR2YCrCb[0][1] * B + MATRIX_BGR2YCrCb[1][1] * G + MATRIX_BGR2YCrCb[2][1] * R;
	Cb = MATRIX_BGR2YCrCb[0][2] * B + MATRIX_BGR2YCrCb[1][2] * G + MATRIX_BGR2YCrCb[2][2] * R;
}

const fixed_t MATRIX_YCrCb2BGR[3][3] = {
		{1, 1, 1},
		{0, -0.714136, 1.402},
		{1.772, -0.344136, 0}};

void pixel_convert_YCrCb2BGR(fixed_t Y, fixed_t Cr, fixed_t Cb, color_type &B, color_type &G, color_type &R)
{
	fixed_t B_temp = MATRIX_YCrCb2BGR[0][0] * Y + MATRIX_YCrCb2BGR[1][0] * Cr + MATRIX_YCrCb2BGR[2][0] * Cb;
	fixed_t G_temp = MATRIX_YCrCb2BGR[0][1] * Y + MATRIX_YCrCb2BGR[1][1] * Cr + MATRIX_YCrCb2BGR[2][1] * Cb;
	fixed_t R_temp = MATRIX_YCrCb2BGR[0][2] * Y + MATRIX_YCrCb2BGR[1][2] * Cr + MATRIX_YCrCb2BGR[2][2] * Cb;


	B = static_cast<color_type>(std::min(std::max(hls::round(static_cast<float>(B_temp)), 0.0f), 255.0f));
	G = static_cast<color_type>(std::min(std::max(hls::round(static_cast<float>(G_temp)), 0.0f), 255.0f));
	R = static_cast<color_type>(std::min(std::max(hls::round(static_cast<float>(R_temp)), 0.0f), 255.0f));
}

// Function to compute (update) various counters
void counters(word_type &f, word_type &r, word_type &p, flag_type sof, flag_type eol)
{
	static word_type frame_counter = -1; // initialization to -1 because already the first pixel of a frame is designated with SoF
	static word_type row_counter = 0;
	static word_type pixel_counter = 0;
	// Update local counter values
	if (sof) // new frame is starting
		frame_counter++;
	if (eol) // current row is ending
		row_counter++;
	pixel_counter++;
	// Make new values accessible
	f = frame_counter;
	r = row_counter;
	p = pixel_counter;
}

// /////////////////////////////////////////////////////////////////////////////
// Main IP core functionality
// /////////////////////////////////////////////////////////////////////////////
void pixel_proc(
		video_axis *video_in,                                           // input AXI-Stream with pixels
		video_axis *video_out,                                          // output AXI-Stream with pixels
		word_type &frames, word_type &rows, word_type &pixels,          // various counters
		word_type &sum_before, word_type &sum_after, word_type &values, // debug sums
		flag_type &read_done, flag_type &write_ready,                   // flags to control shared memory access
		word_type shared_memory[256]                                    // shared memory itself
)
{

	// HLS pragmas to ensure correct IP core functionality
#pragma HLS CLOCK domain = default               // IP core uses two clocks: default (logic) and control (AXI-Lite)
#pragma HLS INTERFACE ap_ctrl_none port = return // handshake on main function return is disabled
#pragma HLS INLINE REGION RECURSIVE              // all function calls are inlined (disable handshake on function calls)

	// HLS pragmas to ensure correct interface inference
#pragma HLS INTERFACE axis depth = 1280 port = video_in  // input AXI-Stream data interface
#pragma HLS INTERFACE axis depth = 1280 port = video_out // output AXI-Stream data interface
	// All registers and shared memory are bundled into a single AXI-Lite interface
#pragma HLS INTERFACE s_axilite register port = frames
#pragma HLS INTERFACE s_axilite register port = rows
#pragma HLS INTERFACE s_axilite register port = pixels
#pragma HLS INTERFACE s_axilite register port = sum_before
#pragma HLS INTERFACE s_axilite register port = sum_after
#pragma HLS INTERFACE s_axilite register port = values
#pragma HLS INTERFACE s_axilite register port = read_done
#pragma HLS INTERFACE s_axilite register port = write_ready
#pragma HLS INTERFACE s_axilite port = shared_memory

	bool last = false; // loop to process video row-by-row (required only for simulation purposes)


	while (!last)
	{
#pragma HLS loop_tripcount min = 1280 max = 1280 avg = 1280 // inform the HLS tool for better statistics
#pragma HLS pipeline II = 2                       // target II is 2, sufficient for HD video but not for Full HD

		// read one pixel and decode its color channels and flags
		color_type B, G, R;
		flag_type sof, eol;
		B = video_in->data.byte0; // decoding
		G = video_in->data.byte1;
		R = video_in->data.byte2;
		sof = video_in->user;
		eol = video_in->last;
		++video_in;               // axis read confirm

		// update counters
		word_type local_frames; // value of frame counter will be needed locally
		counters(local_frames, rows, pixels, sof, eol);
		frames = local_frames;

		fixed_t Y, Cr, Cb;
		pixel_convert_BGR2YCrCb(B, G, R, Y, Cr, Cb);

		Y = static_cast<color_type>(hls::round(static_cast<float>(Y)));
		static Context copy1, copy2;
		color_type newB;
		flag_type copy_select;
		flag_type start;
		copy_select = local_frames.range(2, 2);        // 2nd bit of frame counter flips every 4 frames
		start = sof && (local_frames.range(1,0) == 0); // block of frames start is indicated by SoF in the first frame of the block
		if(copy_select) { // based on select bit, one copy is active and the other is updating
			copy1.active(newB, Y);
			copy2.update(start, sum_before, sum_after, values, shared_memory, read_done, write_ready);
		} else {
			copy2.active(newB, Y);
			copy1.update(start, sum_before, sum_after, values, shared_memory, read_done, write_ready);
		}

		pixel_convert_YCrCb2BGR(newB, Cr, Cb, B, G, R);

		// pixel color channel encoding
		video_out->data.byte0 = B; // encoding
		video_out->data.byte1 = G;
		video_out->data.byte2 = R;
		video_out->user = sof;
		video_out->last = eol;
		++video_out;               // confirm axis write

		last = eol; // just for simulation loop
	}
}
