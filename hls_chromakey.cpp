#include "xf_inrange_config.h"

void inrange_accel(xf::Mat<IN_TYPE, HEIGHT, WIDTH, NPIX> &_src,unsigned char* lower_thresh,unsigned char* upper_thresh,xf::Mat<OUT_TYPE, HEIGHT, WIDTH, NPIX> &_dst)
{
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE s_axilite port=_src
#pragma HLS INTERFACE s_axilite port=lower_thresh
#pragma HLS INTERFACE s_axilite port=upper_thresh
#pragma HLS INTERFACE s_axilite port=_dst

	xf::inRange<IN_TYPE,OUT_TYPE,HEIGHT, WIDTH,NPIX>(_src, lower_thresh,upper_thresh,_dst);
}
