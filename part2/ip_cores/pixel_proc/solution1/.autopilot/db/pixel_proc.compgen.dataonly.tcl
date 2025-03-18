# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_AXILiteS {
frames_V { 
	dir O
	width 32
	depth 1
	mode ap_vld
	offset 16
	offset_end 23
}
rows_V { 
	dir O
	width 32
	depth 1
	mode ap_vld
	offset 24
	offset_end 31
}
pixels_V { 
	dir O
	width 32
	depth 1
	mode ap_vld
	offset 32
	offset_end 39
}
sum_before_V { 
	dir O
	width 32
	depth 1
	mode ap_vld
	offset 40
	offset_end 47
}
sum_after_V { 
	dir O
	width 32
	depth 1
	mode ap_vld
	offset 48
	offset_end 55
}
values_V { 
	dir O
	width 32
	depth 1
	mode ap_vld
	offset 56
	offset_end 63
}
read_done_V { 
	dir O
	width 1
	depth 1
	mode ap_vld
	offset 64
	offset_end 71
}
write_ready_V { 
	dir I
	width 1
	depth 1
	mode ap_none
	offset 72
	offset_end 79
}
shared_memory_0_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 80
	offset_end 95
}
shared_memory_1_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 96
	offset_end 111
}
shared_memory_2_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 112
	offset_end 127
}
shared_memory_3_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 128
	offset_end 143
}
shared_memory_4_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 144
	offset_end 159
}
shared_memory_5_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 160
	offset_end 175
}
shared_memory_6_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 176
	offset_end 191
}
shared_memory_7_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 192
	offset_end 207
}
shared_memory_8_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 208
	offset_end 223
}
shared_memory_9_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 224
	offset_end 239
}
shared_memory_10_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 240
	offset_end 255
}
shared_memory_11_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 256
	offset_end 271
}
shared_memory_12_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 272
	offset_end 287
}
shared_memory_13_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 288
	offset_end 303
}
shared_memory_14_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 304
	offset_end 319
}
shared_memory_15_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 320
	offset_end 335
}
shared_memory_16_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 336
	offset_end 351
}
shared_memory_17_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 352
	offset_end 367
}
shared_memory_18_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 368
	offset_end 383
}
shared_memory_19_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 384
	offset_end 399
}
shared_memory_20_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 400
	offset_end 415
}
shared_memory_21_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 416
	offset_end 431
}
shared_memory_22_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 432
	offset_end 447
}
shared_memory_23_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 448
	offset_end 463
}
shared_memory_24_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 464
	offset_end 479
}
shared_memory_25_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 480
	offset_end 495
}
shared_memory_26_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 496
	offset_end 511
}
shared_memory_27_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 512
	offset_end 527
}
shared_memory_28_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 528
	offset_end 543
}
shared_memory_29_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 544
	offset_end 559
}
shared_memory_30_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 560
	offset_end 575
}
shared_memory_31_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 576
	offset_end 591
}
shared_memory_32_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 592
	offset_end 607
}
shared_memory_33_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 608
	offset_end 623
}
shared_memory_34_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 624
	offset_end 639
}
shared_memory_35_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 640
	offset_end 655
}
shared_memory_36_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 656
	offset_end 671
}
shared_memory_37_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 672
	offset_end 687
}
shared_memory_38_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 688
	offset_end 703
}
shared_memory_39_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 704
	offset_end 719
}
shared_memory_40_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 720
	offset_end 735
}
shared_memory_41_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 736
	offset_end 751
}
shared_memory_42_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 752
	offset_end 767
}
shared_memory_43_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 768
	offset_end 783
}
shared_memory_44_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 784
	offset_end 799
}
shared_memory_45_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 800
	offset_end 815
}
shared_memory_46_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 816
	offset_end 831
}
shared_memory_47_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 832
	offset_end 847
}
shared_memory_48_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 848
	offset_end 863
}
shared_memory_49_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 864
	offset_end 879
}
shared_memory_50_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 880
	offset_end 895
}
shared_memory_51_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 896
	offset_end 911
}
shared_memory_52_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 912
	offset_end 927
}
shared_memory_53_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 928
	offset_end 943
}
shared_memory_54_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 944
	offset_end 959
}
shared_memory_55_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 960
	offset_end 975
}
shared_memory_56_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 976
	offset_end 991
}
shared_memory_57_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 992
	offset_end 1007
}
shared_memory_58_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 1008
	offset_end 1023
}
shared_memory_59_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 1024
	offset_end 1039
}
shared_memory_60_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 1040
	offset_end 1055
}
shared_memory_61_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 1056
	offset_end 1071
}
shared_memory_62_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 1072
	offset_end 1087
}
shared_memory_63_V { 
	dir IO
	width 32
	depth 4
	mode ap_memory
	offset 1088
	offset_end 1103
}
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


