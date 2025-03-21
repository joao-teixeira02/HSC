set_property SRC_FILE_INFO {cfile:c:/Users/PC/HSC/part2/overlay/hsc_video/hsc_video.srcs/sources_1/bd/hsc_video/ip/hsc_video_s00_regslice_3/hsc_video_s00_regslice_3_clocks.xdc rfile:../../../hsc_video.srcs/sources_1/bd/hsc_video/ip/hsc_video_s00_regslice_3/hsc_video_s00_regslice_3_clocks.xdc id:1 order:LATE scoped_inst:inst} [current_design]
current_instance inst
set_property src_info {type:SCOPED_XDC file:1 line:10 export:INPUT save:INPUT read:READ} [current_design]
create_waiver -internal -scope -type CDC -id CDC-7 -user axi_register_slice -tags "1040889" -to [get_pins -filter {REF_PIN_NAME=~CLR} -of_objects  [get_cells -hierarchical -regexp .*15.*_multi/.*/common.srl_fifo_0/asyncclear_.*]] -description {Waiving CDC-7, CDC between 2 known synchronous clock domains}
