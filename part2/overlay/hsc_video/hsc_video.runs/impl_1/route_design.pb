
Q
Command: %s
53*	vivadotcl2 
route_design2default:defaultZ4-113h px� 
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2"
Implementation2default:default2
xc7z0202default:defaultZ17-347h px� 
�
0Got license for feature '%s' and/or device '%s'
310*common2"
Implementation2default:default2
xc7z0202default:defaultZ17-349h px� 
p
,Running DRC as a precondition to command %s
22*	vivadotcl2 
route_design2default:defaultZ4-22h px� 
P
Running DRC with %s threads
24*drc2
22default:defaultZ23-27h px� 
V
DRC finished with %s
79*	vivadotcl2
0 Errors2default:defaultZ4-198h px� 
e
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199h px� 
V

Starting %s Task
103*constraints2
Routing2default:defaultZ18-103h px� 
}
BMultithreading enabled for route_design using a maximum of %s CPUs17*	routeflow2
22default:defaultZ35-254h px� 
p

Phase %s%s
101*constraints2
1 2default:default2#
Build RT Design2default:defaultZ18-101h px� 
B
-Phase 1 Build RT Design | Checksum: ef97eed2
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:01:21 ; elapsed = 00:00:49 . Memory (MB): peak = 2447.707 ; gain = 26.2462default:defaulth px� 
v

Phase %s%s
101*constraints2
2 2default:default2)
Router Initialization2default:defaultZ18-101h px� 
o

Phase %s%s
101*constraints2
2.1 2default:default2 
Create Timer2default:defaultZ18-101h px� 
A
,Phase 2.1 Create Timer | Checksum: ef97eed2
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:01:22 ; elapsed = 00:00:50 . Memory (MB): peak = 2447.707 ; gain = 26.2462default:defaulth px� 
{

Phase %s%s
101*constraints2
2.2 2default:default2,
Fix Topology Constraints2default:defaultZ18-101h px� 
M
8Phase 2.2 Fix Topology Constraints | Checksum: ef97eed2
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:01:22 ; elapsed = 00:00:51 . Memory (MB): peak = 2447.715 ; gain = 26.2542default:defaulth px� 
t

Phase %s%s
101*constraints2
2.3 2default:default2%
Pre Route Cleanup2default:defaultZ18-101h px� 
F
1Phase 2.3 Pre Route Cleanup | Checksum: ef97eed2
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:01:23 ; elapsed = 00:00:51 . Memory (MB): peak = 2447.715 ; gain = 26.2542default:defaulth px� 
p

Phase %s%s
101*constraints2
2.4 2default:default2!
Update Timing2default:defaultZ18-101h px� 
C
.Phase 2.4 Update Timing | Checksum: 1680b5f97
*commonh px� 
�

%s
*constraints2p
\Time (s): cpu = 00:01:53 ; elapsed = 00:01:11 . Memory (MB): peak = 2500.910 ; gain = 79.4492default:defaulth px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-1.959 | TNS=-6364.663| WHS=-0.376 | THS=-396.098|
2default:defaultZ35-416h px� 
}

Phase %s%s
101*constraints2
2.5 2default:default2.
Update Timing for Bus Skew2default:defaultZ18-101h px� 
r

Phase %s%s
101*constraints2
2.5.1 2default:default2!
Update Timing2default:defaultZ18-101h px� 
E
0Phase 2.5.1 Update Timing | Checksum: 15dbbcd5f
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:02:18 ; elapsed = 00:01:26 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
�
Intermediate Timing Summary %s164*route2L
8| WNS=-1.959 | TNS=-6227.058| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
P
;Phase 2.5 Update Timing for Bus Skew | Checksum: 1948465fe
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:02:19 ; elapsed = 00:01:27 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
I
4Phase 2 Router Initialization | Checksum: 201f9fa25
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:02:19 ; elapsed = 00:01:27 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
p

Phase %s%s
101*constraints2
3 2default:default2#
Initial Routing2default:defaultZ18-101h px� 
C
.Phase 3 Initial Routing | Checksum: 1f3979c07
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:02:38 ; elapsed = 00:01:38 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
s

Phase %s%s
101*constraints2
4 2default:default2&
Rip-up And Reroute2default:defaultZ18-101h px� 
u

Phase %s%s
101*constraints2
4.1 2default:default2&
Global Iteration 02default:defaultZ18-101h px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-2.372 | TNS=-10717.482| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
H
3Phase 4.1 Global Iteration 0 | Checksum: 14dd3f236
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:05:15 ; elapsed = 00:03:20 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
u

Phase %s%s
101*constraints2
4.2 2default:default2&
Global Iteration 12default:defaultZ18-101h px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-2.218 | TNS=-10484.790| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
H
3Phase 4.2 Global Iteration 1 | Checksum: 2078343d4
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:06:25 ; elapsed = 00:04:14 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
u

Phase %s%s
101*constraints2
4.3 2default:default2&
Global Iteration 22default:defaultZ18-101h px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-2.279 | TNS=-10375.917| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
H
3Phase 4.3 Global Iteration 2 | Checksum: 23846b981
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:06:55 ; elapsed = 00:04:38 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
F
1Phase 4 Rip-up And Reroute | Checksum: 23846b981
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:06:55 ; elapsed = 00:04:38 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
|

Phase %s%s
101*constraints2
5 2default:default2/
Delay and Skew Optimization2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
5.1 2default:default2!
Delay CleanUp2default:defaultZ18-101h px� 
r

Phase %s%s
101*constraints2
5.1.1 2default:default2!
Update Timing2default:defaultZ18-101h px� 
E
0Phase 5.1.1 Update Timing | Checksum: 258c1a0a4
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:03 ; elapsed = 00:04:43 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-2.205 | TNS=-10151.689| WHS=N/A    | THS=N/A    |
2default:defaultZ35-416h px� 
C
.Phase 5.1 Delay CleanUp | Checksum: 13cff24af
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:04 ; elapsed = 00:04:44 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
z

Phase %s%s
101*constraints2
5.2 2default:default2+
Clock Skew Optimization2default:defaultZ18-101h px� 
M
8Phase 5.2 Clock Skew Optimization | Checksum: 13cff24af
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:04 ; elapsed = 00:04:44 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
O
:Phase 5 Delay and Skew Optimization | Checksum: 13cff24af
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:04 ; elapsed = 00:04:44 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
n

Phase %s%s
101*constraints2
6 2default:default2!
Post Hold Fix2default:defaultZ18-101h px� 
p

Phase %s%s
101*constraints2
6.1 2default:default2!
Hold Fix Iter2default:defaultZ18-101h px� 
r

Phase %s%s
101*constraints2
6.1.1 2default:default2!
Update Timing2default:defaultZ18-101h px� 
E
0Phase 6.1.1 Update Timing | Checksum: 16d0d1b52
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:11 ; elapsed = 00:04:49 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
�
Intermediate Timing Summary %s164*route2M
9| WNS=-2.205 | TNS=-10153.460| WHS=0.010  | THS=0.000  |
2default:defaultZ35-416h px� 
C
.Phase 6.1 Hold Fix Iter | Checksum: 13caa1e4b
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:12 ; elapsed = 00:04:49 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
A
,Phase 6 Post Hold Fix | Checksum: 13caa1e4b
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:12 ; elapsed = 00:04:49 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
o

Phase %s%s
101*constraints2
7 2default:default2"
Route finalize2default:defaultZ18-101h px� 
A
,Phase 7 Route finalize | Checksum: e30a130a
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:12 ; elapsed = 00:04:50 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
v

Phase %s%s
101*constraints2
8 2default:default2)
Verifying routed nets2default:defaultZ18-101h px� 
H
3Phase 8 Verifying routed nets | Checksum: e30a130a
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:12 ; elapsed = 00:04:50 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
r

Phase %s%s
101*constraints2
9 2default:default2%
Depositing Routes2default:defaultZ18-101h px� 
E
0Phase 9 Depositing Routes | Checksum: 1921a869c
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:18 ; elapsed = 00:04:56 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
t

Phase %s%s
101*constraints2
10 2default:default2&
Post Router Timing2default:defaultZ18-101h px� 
�
Estimated Timing Summary %s
57*route2M
9| WNS=-2.205 | TNS=-10153.460| WHS=0.010  | THS=0.000  |
2default:defaultZ35-57h px� 
B
!Router estimated timing not met.
128*routeZ35-328h px� 
G
2Phase 10 Post Router Timing | Checksum: 1921a869c
*commonh px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:18 ; elapsed = 00:04:56 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
@
Router Completed Successfully
2*	routeflowZ35-16h px� 
�

%s
*constraints2q
]Time (s): cpu = 00:07:18 ; elapsed = 00:04:56 . Memory (MB): peak = 2721.793 ; gain = 300.3322default:defaulth px� 
Z
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
4532default:default2
922default:default2
102default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
route_design2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
route_design: 2default:default2
00:07:282default:default2
00:05:012default:default2
2721.7932default:default2
300.3322default:defaultZ17-268h px� 
H
&Writing timing data to binary archive.266*timingZ38-480h px� 
D
Writing placer database...
1603*designutilsZ20-1893h px� 
=
Writing XDEF routing.
211*designutilsZ20-211h px� 
J
#Writing XDEF routing logical nets.
209*designutilsZ20-209h px� 
J
#Writing XDEF routing special nets.
210*designutilsZ20-210h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2)
Write XDEF Complete: 2default:default2
00:00:222default:default2
00:00:082default:default2
2721.7932default:default2
0.0002default:defaultZ17-268h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2n
ZC:/Users/PC/HSC/part2/overlay/hsc_video/hsc_video.runs/impl_1/hsc_video_wrapper_routed.dcp2default:defaultZ17-1381h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2&
write_checkpoint: 2default:default2
00:00:282default:default2
00:00:132default:default2
2721.7932default:default2
0.0002default:defaultZ17-268h px� 
�
%s4*runtcl2�
�Executing : report_drc -file hsc_video_wrapper_drc_routed.rpt -pb hsc_video_wrapper_drc_routed.pb -rpx hsc_video_wrapper_drc_routed.rpx
2default:defaulth px� 
�
Command: %s
53*	vivadotcl2�
{report_drc -file hsc_video_wrapper_drc_routed.rpt -pb hsc_video_wrapper_drc_routed.pb -rpx hsc_video_wrapper_drc_routed.rpx2default:defaultZ4-113h px� 
>
IP Catalog is up to date.1232*coregenZ19-1839h px� 
P
Running DRC with %s threads
24*drc2
22default:defaultZ23-27h px� 
�
#The results of DRC are in file %s.
168*coretcl2�
^C:/Users/PC/HSC/part2/overlay/hsc_video/hsc_video.runs/impl_1/hsc_video_wrapper_drc_routed.rpt^C:/Users/PC/HSC/part2/overlay/hsc_video/hsc_video.runs/impl_1/hsc_video_wrapper_drc_routed.rpt2default:default8Z2-168h px� 
\
%s completed successfully
29*	vivadotcl2

report_drc2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2 
report_drc: 2default:default2
00:00:202default:default2
00:00:102default:default2
2721.7932default:default2
0.0002default:defaultZ17-268h px� 
�
%s4*runtcl2�
�Executing : report_methodology -file hsc_video_wrapper_methodology_drc_routed.rpt -pb hsc_video_wrapper_methodology_drc_routed.pb -rpx hsc_video_wrapper_methodology_drc_routed.rpx
2default:defaulth px� 
�
Command: %s
53*	vivadotcl2�
�report_methodology -file hsc_video_wrapper_methodology_drc_routed.rpt -pb hsc_video_wrapper_methodology_drc_routed.pb -rpx hsc_video_wrapper_methodology_drc_routed.rpx2default:defaultZ4-113h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
�
>Generated clock %s has no logical paths from master clock %s.
174*timing2N
:hsc_video_i/video/hdmi_out/frontend/rgb2dvi_0/U0/SerialClk2default:default2*
axi_dynclk_0_PXL_CLK_O2default:defaultZ38-249h px� 
Y
$Running Methodology with %s threads
74*drc2
22default:defaultZ23-133h px� 
�
2The results of Report Methodology are in file %s.
450*coretcl2�
jC:/Users/PC/HSC/part2/overlay/hsc_video/hsc_video.runs/impl_1/hsc_video_wrapper_methodology_drc_routed.rptjC:/Users/PC/HSC/part2/overlay/hsc_video/hsc_video.runs/impl_1/hsc_video_wrapper_methodology_drc_routed.rpt2default:default8Z2-1520h px� 
d
%s completed successfully
29*	vivadotcl2&
report_methodology2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2(
report_methodology: 2default:default2
00:00:502default:default2
00:00:292default:default2
3034.7972default:default2
313.0042default:defaultZ17-268h px� 
�
%s4*runtcl2�
�Executing : report_power -file hsc_video_wrapper_power_routed.rpt -pb hsc_video_wrapper_power_summary_routed.pb -rpx hsc_video_wrapper_power_routed.rpx
2default:defaulth px� 
�
Command: %s
53*	vivadotcl2�
�report_power -file hsc_video_wrapper_power_routed.rpt -pb hsc_video_wrapper_power_summary_routed.pb -rpx hsc_video_wrapper_power_routed.rpx2default:defaultZ4-113h px� 
E
%Done setting XDC timing constraints.
35*timingZ38-35h px� 
�
>Generated clock %s has no logical paths from master clock %s.
174*timing2N
:hsc_video_i/video/hdmi_out/frontend/rgb2dvi_0/U0/SerialClk2default:default2*
axi_dynclk_0_PXL_CLK_O2default:defaultZ38-249h px� 
K
,Running Vector-less Activity Propagation...
51*powerZ33-51h px� 
�
>Generated clock %s has no logical paths from master clock %s.
174*timing2N
:hsc_video_i/video/hdmi_out/frontend/rgb2dvi_0/U0/SerialClk2default:default2*
axi_dynclk_0_PXL_CLK_O2default:defaultZ38-249h px� 
P
3
Finished Running Vector-less Activity Propagation
1*powerZ33-1h px� 
�
�Detected over-assertion of set/reset/preset/clear net with high fanouts, power estimation might not be accurate. Please run Tool - Power Constraint Wizard to set proper switching activities for control signals.282*powerZ33-332h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
4652default:default2
932default:default2
132default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
report_power2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
report_power: 2default:default2
00:00:342default:default2
00:00:202default:default2
3034.7972default:default2
0.0002default:defaultZ17-268h px� 
�
%s4*runtcl2�
oExecuting : report_route_status -file hsc_video_wrapper_route_status.rpt -pb hsc_video_wrapper_route_status.pb
2default:defaulth px� 
�
%s4*runtcl2�
�Executing : report_timing_summary -max_paths 10 -file hsc_video_wrapper_timing_summary_routed.rpt -pb hsc_video_wrapper_timing_summary_routed.pb -rpx hsc_video_wrapper_timing_summary_routed.rpx -warn_on_violation 
2default:defaulth px� 
r
UpdateTimingParams:%s.
91*timing29
% Speed grade: -1, Delay Type: min_max2default:defaultZ38-91h px� 
|
CMultithreading enabled for timing update using a maximum of %s CPUs155*timing2
22default:defaultZ38-191h px� 
�
>Generated clock %s has no logical paths from master clock %s.
174*timing2N
:hsc_video_i/video/hdmi_out/frontend/rgb2dvi_0/U0/SerialClk2default:default2*
axi_dynclk_0_PXL_CLK_O2default:defaultZ38-249h px� 
�
rThe design failed to meet the timing requirements. Please see the %s report for details on the timing violations.
188*timing2"
timing summary2default:defaultZ38-282h px� 
�
}There are set_bus_skew constraint(s) in this design. Please run report_bus_skew to ensure that bus skew requirements are met.223*timingZ38-436h px� 
�
%s4*runtcl2n
ZExecuting : report_incremental_reuse -file hsc_video_wrapper_incremental_reuse_routed.rpt
2default:defaulth px� 
g
BIncremental flow is disabled. No incremental reuse Info to report.423*	vivadotclZ4-1062h px� 
�
%s4*runtcl2n
ZExecuting : report_clock_utilization -file hsc_video_wrapper_clock_utilization_routed.rpt
2default:defaulth px� 
�
%s4*runtcl2�
�Executing : report_bus_skew -warn_on_violation -file hsc_video_wrapper_bus_skew_routed.rpt -pb hsc_video_wrapper_bus_skew_routed.pb -rpx hsc_video_wrapper_bus_skew_routed.rpx
2default:defaulth px� 
r
UpdateTimingParams:%s.
91*timing29
% Speed grade: -1, Delay Type: min_max2default:defaultZ38-91h px� 
|
CMultithreading enabled for timing update using a maximum of %s CPUs155*timing2
22default:defaultZ38-191h px� 
�
>Generated clock %s has no logical paths from master clock %s.
174*timing2N
:hsc_video_i/video/hdmi_out/frontend/rgb2dvi_0/U0/SerialClk2default:default2*
axi_dynclk_0_PXL_CLK_O2default:defaultZ38-249h px� 


End Record