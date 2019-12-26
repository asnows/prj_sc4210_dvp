#include "psiic.h"
#include "xstatus.h"
#include "xpseudo_asm_gcc.h"
#include "Image_Pixl.h"
#include"SC030GS.h"





//#define SC130GS
//#define SC030GS
//#define SC2238
//#define SC4236_64M15FPS
//#define SC4236_120M30FPS
#define SC4210

static unsigned int SC030GC[]=
{
#ifdef SC030GS
		0x01000000,
		0x3018001f,
		0x301900ff,
		0x301c00b4,
		0x30220010,
		0x302b0080,
		0x30300004,
		0x3031000a,
		0x30340029,
		0x3035002a,
		0x30380044,
		0x30390033,
		0x303a0077,
		0x303b0005,
		0x303c0004,
		0x303f0091,
		0x32000001,
		0x320100b8,
		0x32020000,
		0x32030088,
		0x32040004,
		0x32050047,
		0x32060001,
		0x3207007b,
		0x32080002,//
		0x32090080,//
		0x320a0001,//
		0x320b00e0,//
		0x320c0002,
		0x320d00ee,
		0x320e0001,
		0x320f000e,
		0x32110004,//
		0x32130004,//
		0x322f009f,
		0x33000020,
		0x3302000c,
		0x33060048,
		0x33080050,
		0x330a0000,
		0x330b008c,
		0x330e001a,
		0x331000f0,
		0x33110010,
		0x331900e8,
		0x33330090,
		0x33340030,
		0x33480002,
		0x334900ee,
		0x334a0002,
		0x334b00e8,
		0x335d0000,
		0x338000ff,
		0x338200e0,
		0x3383000a,
		0x338400e4,
		0x34000053,
		0x34160031,
		0x35180007,
		0x351900c8,
		0x36200023,
		0x3621000a,
		0x36220006,
		0x36230014,
		0x36240040,
		0x36250000,
		0x36260000,
		0x36270001,
		0x36300063,
		0x36320074,
		0x36330063,
		0x363400ff,
		0x36350044,
		0x36380082,
		0x36390074,
		0x363a0024,
		0x363b0000,
		0x36400002,
		0x3658009a,
		0x36630088,
		0x36640007,
		0x3c000045,
		0x3d080000,
		0x3e01001a,
		0x3e020000,
		0x3e03000b,
		0x3e080003,
		0x3e090020,
		0x3e0e0000,
		0x3e0f0014,
		0x3e1400b0,
		0x3f080004,
		0x450100c0,
//		0x450100c8,//incremental pattern
		0x45020016,
		0x50000001,
//		0x50400080,//color bar enable
		0x5b000002,
		0x5b010003,
		0x5b020001,
		0x5b030001,

		0x01000001,
		0xffff0000
#endif

#ifdef SC130GS


		//0x01030001,
		0x01000000,
		0x3018001f,
		0x301900ff,
		0x301c00b4,
		0x30220010,
		0x302b0080,
		0x30300004,
		0x3031000a,
		0x30340029,
		0x3035002a,
		0x30380044,
		0x30390033,
		0x303a0077,
		0x303b0005,
		0x303c0004,
		0x303f0091,
		0x32020000,
		0x32030000,
		0x3205008b,
		0x32060002,
		0x32070004,
		0x320a0004,
		0x320b0000,
		0x320c0002,
		0x320d00ee,
		0x320e0002,
		0x320f001c,
		0x3211000c,
		0x32130004,
		0x33000020,
		0x3302000c,
		0x33060048,
		0x33080050,
		0x330a0000,
		0x330b008c,
		0x330e001a,
		0x331000f0,
		0x33110010,
		0x331900e8,
		0x33330090,
		0x33340030,
		0x33480002,
		0x334900ee,
		0x334a0002,
		0x334b00e8,
		0x335d0000,
		0x338000ff,
		0x338200e0,
		0x3383000a,
		0x338400e4,
		0x34000053,
		0x34160031,
		0x35180007,
		0x351900c8,
		0x36200023,
		0x3621000a,
		0x36220006,
		0x36230014,
		0x36240040,
		0x36250000,
		0x36260000,
		0x36270001,
		0x36300063,
		0x36320074,
		0x36330063,
		0x363400ff,
		0x36350044,
		0x36380082,
		0x36390074,
		0x363a0024,
		0x363b0000,
		0x36400002,
		0x3658009a,
		0x36630088,
		0x36640007,
		0x3c000045,
		0x3d080000,
		0x3e01001a,
		0x3e020000,
		0x3e03000b,
		0x3e080003,
		0x3e090020,
		0x3e0e0000,
		0x3e0f0014,
		0x3e1400b0,
		0x3f080004,
		0x450100c0,
		0x45020016,
		0x50000001,
		0x5b000002,
		0x5b010003,
		0x5b020001,
		0x5b030001,
		0x01000001,
//		[gain<4]
//		0x363a0024,
//		0x36300063,
//		[gain>=4]
//		0x363a0064,
//		0x36300073,

		0xffff0000

#endif

#ifdef SC2238
		0x01030001,
		0x01000000,
		0x30340005,
		0x3035002a,
		0x30390035,
		0x303a002e,
		0x320c0008,
		0x320d00ca,
		0x320e0004,
		0x320f00b0,
		0x32220029,
		0x32350004,
		0x323600ae,
		0x32370008,
		0x3238009a,
		0x33010005,
		0x33030020,
		0x33060042,
		0x330900a0,
		0x330b00ca,
		0x330e0030,
		0x33130005,
		0x331e000d,
		0x331f008d,
		0x3320000f,
		0x3321008f,
		0x33400006,
		0x33410050,
		0x33420004,
		0x33430020,
		0x33480007,
		0x33490080,
		0x334a0004,
		0x334b0020,
		0x335e0001,
		0x335f0003,
		0x33640005,
		0x3366007c,
		0x33670008,
		0x33680002,
		0x33690000,
		0x336a0000,
		0x336b0000,
		0x337c0004,
		0x337d0006,
		0x337f0003,
		0x33800004,
		0x3381000a,
		0x33a00005,
		0x33b50010,
		0x36210028,
		0x362200c6,
		0x36250002,
		0x36300048,
		0x36310084,
		0x36320088,
		0x36330042,
		0x36340042,
		0x363500c1,
		0x36360024,
		0x36370014,
		0x3638001f,
		0x36390009,
		0x363b0009,
		0x363c0007,
		0x36410001,
		0x366e0008,
		0x366f002f,
		0x36700008,
		0x3677003f,
		0x36780042,
		0x36790043,
		0x367e0007,
		0x367f000f,
		0x38020001,
		0x39010002,
		0x39080011,
		0x391b004d,
		0x391e0000,
		0x3d080000,
		0x3e010046,
		0x3e03000b,
		0x3f000007,
		0x3f040008,
		0x3f0500a6,
		0x45000059,
		0x578000ff,
		0x57810004,
		0x57850018,
		0x33010005,//[4,6]20180117
		0x36310084,
		0x366f002f,
		0x362200c6,//20180117
		0x01000001,
		0xffff0000
#endif

#ifdef SC4236_64M15FPS
		//0x01030001,
		0x01000000,
		0x3018001f,
		0x301900ff,
		0x301c00b4,
		0x303800cc,
		0x32000000,
		0x32010004,
		0x32020000,
		0x32030034,
		0x32040009,
		0x3205000b,
		0x32060005,
		0x320700db,
		0x32080009,
		0x32090000,
		0x320a0005,
		0x320b00a0,
		0x320c000a,
		0x320d004d,
		0x320e0006,
		0x320f0052,
		0x32220029,
		0x3235000c,
		0x323600a2,
		0x33010018,
		0x33030030,
		0x33060038,
		0x33070018,
		0x33080018,
		0x33090080,
		0x330a0000,
		0x330b00a4,
		0x330e0050,
		0x330f0004,
		0x33100020,
		0x33140004,
		0x331e0021,
		0x331f0071,
		0x33200006,
		0x33260000,
		0x33330020,
		0x33660078,
		0x33670008,
		0x33680004,
		0x33690000,
		0x336a0000,
		0x336b0000,
		0x337f0003,
		0x33aa0000,
		0x36200028,
		0x362200f6,
		0x36250003,
		0x36300080,
		0x36310088,
		0x36320018,
		0x36330023,
		0x363500e2,
		0x36360024,
		0x36370063,
		0x36380018,
		0x36390009,
		0x363a001f,
		0x363b000c,
		0x363c0005,
		0x363d0005,
		0x36400000,
		0x36410001,
		0x366e0008,
		0x366f002f,
		0x36e90044,
		0x36ea0020,
		0x36eb000d,
		0x36ec001e,
		0x36ed0003,
		0x36f90006,
		0x36fa00c2,
		0x38020000,
		0x39010002,
		0x39080015,
		0x3933000a,
		0x39340016,
		0x39400015,
		0x39410014,
		0x39420002,
		0x39430020,
		0x39460048,
		0x39470020,
		0x3948000a,
		0x39490010,
		0x394a0028,
		0x394b0048,
		0x394c0008,
		0x394d0014,
		0x394e0028,
		0x394f0040,
		0x39500020,
		0x39510010,
		0x39520068,
		0x39530038,
		0x39540018,
		0x39550018,
		0x39560038,
		0x39570078,
		0x39580010,
		0x39590020,
		0x395a0038,
		0x395b0038,
		0x395c0020,
		0x395d0010,
		0x395e0024,
		0x395f0000,
		0x396000c4,
		0x396100b1,
		0x39620009,
		0x39630080,
		0x3d080000,
		0x3e0100ca,
		0x3e020000,
		0x3e060000,
		0x3e080003,
		0x3e090010,
		0x3e1e0034,
		0x3f00000f,
		0x3f040005,
		0x3f050002,
		0x48370020,
		0x50000006,
		0x5780007f,
		0x57810004,
		0x57820003,
		0x57830002,
		0x57840001,
		0x57850018,
		0x57860010,
		0x57870008,
		0x57880002,
		0x57890020,
		0x578a0030,
		0x01000001,
		0x33010050,   //[7,ff]20180208
		0x36330023,
		0x36300080,
		0x362200f6,
		0xffff0000
#endif

#ifdef SC4210
		0x01000000,
		0x36e900a7,//pll1 bypass
		0x36f900a0,//pll2 bypass
		0x3000000f,
		0x300100ff,
		0x300200ff,
		0x300a002c,
		0x300f0000,
		0x3018002f,
		0x301900ff,
		0x301a00f8,
		0x301c0094,
		0x301f0023,
		0x30300002,
		0x30380022,
		0x303f0081,
		0x320c0005,
		0x320d0046,
		0x32200010,
		0x32250001,
		0x32270003,
		0x32290008,
		0x32310001,
		0x32410002,
		0x32430003,
		0x32490017,
		0x32510008,
		0x32530008,
		0x325e0000,
		0x325f0000,
		0x32730001,
		0x33010028,
		0x33020018,
		0x33040014,
		0x33050000,
		0x33060050,
		0x33080010,
		0x33090024,
		0x330a0000,
		0x330b00a0,
		0x330e0018,
		0x33120002,
		0x33140084,
		0x331e0011,
		0x331f0021,
		0x33200005,
		0x33380010,
		0x334c0010,
		0x335d0020,
		0x3366004a,
		0x33670008,
		0x33680005,
		0x336900dc,
		0x336a000b,
		0x336b00b8,
		0x336c00c2,
		0x337a0008,
		0x337b0010,
		0x337e0040,
		0x33a3000c,
		0x33e000a0,
		0x33e10008,
		0x33e20000,
		0x33e30010,
		0x33e40010,
		0x33e50000,
		0x33e60010,
		0x33e70010,
		0x33e80000,
		0x33e90010,
		0x33ea0016,
		0x33eb0000,
		0x33ec0010,
		0x33ed0018,
		0x33ee00a0,
		0x33ef0008,
		0x33f40000,
		0x33f50010,
		0x33f60010,
		0x33f70000,
		0x33f80010,
		0x33f90010,
		0x33fa0000,
		0x33fb0010,
		0x33fc0016,
		0x33fd0000,
		0x33fe0010,
		0x33ff0018,
		0x360f0005,
		0x362200ff,
		0x36240007,
		0x36250002,
		0x363000c4,
		0x36310080,
		0x36320088,
		0x36330022,
		0x36340064,
		0x36350020,
		0x36360020,
		0x36380028,
		0x363b0003,
		0x363c0006,
		0x363d0006,
		0x366e0004,
		0x36700048,
		0x367100ff,
		0x3672001f,
		0x3673001f,
		0x367a0040,
		0x367b0040,
		0x36900042,
		0x36910044,
		0x36920044,
		0x36990080,
		0x369a009f,
		0x369b009f,
		0x369c0040,
		0x369d0040,
		0x36a20040,
		0x36a30040,
		0x36cc002c,
		0x36cd0030,
		0x36ce0030,
		0x36d00020,
		0x36d10040,
		0x36d20040,
		0x36ea0037,
		0x36eb001e,
		0x36ec0013,
		0x36ed000c,
		0x36fa0037,
		0x36fb0019,
		0x36fc0000,
		0x36fd002c,
		0x38170020,
		0x390500d8,
		0x39080011,
		0x391b0080,
		0x391c000f,
		0x391d0021,
		0x39330024,
		0x393400b0,
		0x39350080,
		0x3936001f,
		0x39400068,
		0x39420004,
		0x394300c0,
		0x39800000,
		0x39810050,
		0x39820000,
		0x39830040,
		0x39840000,
		0x39850020,
		0x39860000,
		0x39870010,
		0x39880000,
		0x39890020,
		0x398a0000,
		0x398b0030,
		0x398c0000,
		0x398d0050,
		0x398e0000,
		0x398f0060,
		0x39900000,
		0x39910070,
		0x39920000,
		0x39930036,
		0x39940000,
		0x39950020,
		0x39960000,
		0x39970014,
		0x39980000,
		0x39990020,
		0x399a0000,
		0x399b0050,
		0x399c0000,
		0x399d0090,
		0x399e0000,
		0x399f00f0,
		0x39a00008,
		0x39a10010,
		0x39a20020,
		0x39a30040,
		0x39a40020,
		0x39a50010,
		0x39a60008,
		0x39a70004,
		0x39a80018,
		0x39a90030,
		0x39aa0040,
		0x39ab0060,
		0x39ac0038,
		0x39ad0020,
		0x39ae0010,
		0x39af0008,
		0x39b90000,
		0x39ba00a0,
		0x39bb0080,
		0x39bc0000,
		0x39bd0044,
		0x39be0000,
		0x39bf0000,
		0x39c00000,
		0x39c50041,
		0x3c000045,
		0x3e000000,
		0x3e0100bb,
		0x3e020040,
		0x3e03000b,
		0x3e060000,
		0x3e070080,
		0x3e080003,
		0x3e090040,
		0x3e0e006a,
		0x3e260040,
		0x440700b0,
		0x44180016,
		0x450100a4,
		0x45090008,
		0x48370057,
		0x5000000e,
		0x550f0020,
		0x57840010,
		0x57850008,
		0x57870006,
		0x57880006,
		0x57890000,
		0x578a0006,
		0x578b0006,
		0x578c0000,
		0x57900010,
		0x57910010,
		0x57920000,
		0x57930010,
		0x57940010,
		0x57950000,
		0x57c40010,
		0x57c50008,
		0x57c70006,
		0x57c80006,
		0x57c90000,
		0x57ca0006,
		0x57cb0006,
		0x57cc0000,
		0x57d00010,
		0x57d10010,
		0x57d20000,
		0x57d30010,
		0x57d40010,
		0x57d50000,
		0x36e90027,
		0x36f90020,
		//灰度渐变测试模式
		//0x450100ac,

		0x01000001,
		0xffff0000

#endif


};








/*************************************************************
 * 默认配置：1280*720*30
 ****************************************************************/
//static unsigned int SC030GC_iRate[11]=
//{
//		0x01000000,
//		0x32120000,
//		0x32130004,
//		0x32100000,
//		0x32110004,
////640*480
////		0x32080002,
////		0x32090080,
////		0x320a0001,
////		0x320b00e0,
////		0x01000001,
////		0xFFFF0000
//
//
////1280*1024
//		0x32080005,
//		0x32090000,
//		0x320a0004,
//		0x320b0000,
//		0x01000001,
//		0xFFFF0000
//
//
//
//};

/*************************************************************************************
 *函数：unsigned int *SC030GS_SetPixle(unsigned short HH,unsigned short VV)
 *功能：设置像素值 以最大的窗体为中心设定像素
 *计算：设置像素框体，涉及到8个寄存器组
                            高8位    低8位
              行起始：0x3212,0x3213
              列起始：0x3210,0x3211
              宽度：   0x3208,0x3209
              高度：   0x320a,0x320b
        HH 必须4字节对齐
 *************************************************************************************/
//unsigned int *SC030GS_SetPixle(unsigned short HH,unsigned short VV)
//{
//
//
//		unsigned short sop;
//		if(HH<240)HH=MAX_WIDTH;
//		if(HH>MAX_WIDTH)HH=MAX_WIDTH;
//		if(VV<240)VV=MAX_HEIGHT;
//		if(VV>MAX_HEIGHT)VV=MAX_HEIGHT;
//		HH &=0xfffc;//必须4字节对其
//		SC030GC_HH=HH;
//		SC030GC_VV=VV;
//		SC030GC_channel=1;
//
//
//		HH>>=1;
//		VV>>=1;
//		sop=MID_WIDTH-HH;//行起始点
//		SC030GC_iRate[1]=((sop>>8)|(0x3212<<16));//行 起始点 高8位
//		SC030GC_iRate[2]=((sop&0xff)|(0x3213<<16));//行 起始点 低八位
//		sop=MID_HEIGHT-VV;//列起始点
//		SC030GC_iRate[3]=((sop>>8)|(0x3210<<16));//列 起始点 高8位
//		SC030GC_iRate[4]=((sop&0xff)|(0x3211<<16));//列 起始点 低八位
//
//		sop=SC030GC_HH;//窗口的宽度
//		SC030GC_iRate[5]=((sop>>8)|(0x3208<<16));  //窗口的宽度 高8位
//        SC030GC_iRate[6]=((sop&0xff)|(0x3209<<16));//窗口的宽度 低八位
//
//        sop=SC030GC_VV;//窗口的高度
//    	SC030GC_iRate[7]=((sop>>8)|(0x320a<<16));  //窗口的宽度 高8位
//        SC030GC_iRate[8]=((sop&0xff)|(0x320b<<16));//窗口的宽度 低八位
//
//		return 0;
//}
/*************************************************************************************
 *函数：unsigned int *SC030GS_CreateWindows(unsigned short H_start,unsigned short W_start, unsigned short H_Len,unsigned short W_Len)
 *功能：创建输出窗体
 *计算：
              行起始：0x3212,0x3213
              列起始：0x3210,0x3211
              宽度：   0x3208,0x3209
              高度：   0x320a,0x320b
        HH 必须4字节对齐
        H_start:行起始位置， 必须>=4 且4的倍数
        W_start 列起始位置， 必须>=4
        H_Len ：行        4的倍数、
        W_Len： 列
 *************************************************************************************/
//unsigned int *SC030GS_CreateWindows(unsigned short H_start,unsigned short W_start, unsigned short HH,unsigned short VV)
//{
//
//		unsigned short sop;
//		if(HH<240)HH=MAX_WIDTH;
//		if(HH>MAX_WIDTH)HH=MAX_WIDTH;
//		if(VV<240)VV=MAX_HEIGHT;
//		if(VV>MAX_HEIGHT)VV=MAX_HEIGHT;
//		H_start &=0xfffc;
//		if(H_start<4)H_start=4;
//
//		HH &=0xfffc;//必须4字节对其
//		SC030GC_HH=HH;
//		SC030GC_VV=VV;
//		SC030GC_channel=1;
//		sop=MID_WIDTH-HH;//行起始点
//		SC030GC_iRate[1]=((H_start>>8)|(0x3212<<16));//行 起始点 高8位
//		SC030GC_iRate[2]=((H_start&0xff)|(0x3213<<16));//行 起始点 低八位
//		sop=MID_HEIGHT-VV;//列起始点
//		SC030GC_iRate[3]=((W_start>>8)|(0x3210<<16));//列 起始点 高8位
//		SC030GC_iRate[4]=((W_start&0xff)|(0x3211<<16));//列 起始点 低八位
//
//		sop=HH;//窗口的宽度
//		SC030GC_iRate[5]=((sop>>8)|(0x3208<<16));  //窗口的宽度 高8位
//        SC030GC_iRate[6]=((sop&0xff)|(0x3209<<16));//窗口的宽度 低八位
//
//        sop=VV;//窗口的高度
//    	SC030GC_iRate[7]=((sop>>8)|(0x320a<<16));  //窗口的宽度 高8位
//        SC030GC_iRate[8]=((sop&0xff)|(0x320b<<16));//窗口的宽度 低八位
//        return 0;
//
//}
/*************************************************************************************
 *函数：int SC030GS_Read(u16 addr,u8 *read_buf)
 *功能：读取SC030GS寄存器数据
 *入参：addr     SC030GS寄存器的地址
 *      read_buf 读取数据对应存放，一个寄存器对应1个字节的数据
 *返回值：XST_SUCCESS 成功
 *************************************************************************************/
static int SC030GS_Read(u16 addr,u8 *read_buf)
{
	u8 buf[2];
	u8 i2c_slave_addr;

	buf[0] = (addr >> 8);
	buf[1] = addr;
	i2c_slave_addr = IIC_DEVICE <<1;

	if(i2c_wrtie_bytes(i2c_slave_addr,buf,2) != XST_SUCCESS)//0x60
		return XST_FAILURE;
	if(i2c_read_bytes(i2c_slave_addr + 1,read_buf,1) != XST_SUCCESS)//
			return XST_FAILURE;
	return XST_SUCCESS;
}
/*************************************************************************************
 *函数：int SC030GS_Write(u16 addr,u8 data)
 *功能：写SC030GS寄存器数据
 *入参：addr     SC030GS寄存器的地址
 *      data     要写入的值
 *返回值：XST_SUCCESS 成功
 *************************************************************************************/
static int SC030GS_Write( u16 Regaddr,u8 data)
{
	u8  buf[4];
	u8 i2c_slave_addr;

	buf[0] = Regaddr >> 8;
	buf[1] = Regaddr & 0xFF;
	buf[2] = data;
	i2c_slave_addr = IIC_DEVICE <<1;

	if(i2c_wrtie_bytes(i2c_slave_addr,buf,3) != XST_SUCCESS)
		return XST_FAILURE;
	return XST_SUCCESS;
}
/*************************************************************************************
 *函数：unsigned char SetSCReg(unsigned int V)
 *功能：写SC030GS寄存器数据，
 *入参：V 高16位 为寄存器的地址
 *        低8位  为寄存器的值
 *      当寄存器地址=FFFF时，认为一组数据写入完毕了
 *返回值：XST_SUCCESS 成功
 *************************************************************************************/
static unsigned char SetSCReg(unsigned int V)
{
		unsigned short reg;
		unsigned char data;
		reg= (unsigned short)((V >>16)&0xffff);
		data= (unsigned short)((V )&0xff);
		if(reg==0xffff)return 0xff;//设置完成
		if(reg==0x0000)return 1;//没有参数
		if(XST_SUCCESS!=SC030GS_Write(reg, data))
		{
			return 2;//
		}
		return 0;
}


int SC030GS_init(void)
{

	unsigned short i;

	unsigned int lev;
    unsigned char value;

	lev = mfcpsr();
	mtcpsr(lev | 0x000000C0);
	//---------------------------------
	SC030GS_Read(0x302b,&value);
	xil_printf("value = %x \r\n",value);
	//---------------------------------

	SC030GS_Write(0x302b, 0x80);
	SC030GS_Read(0x302b,&value);
	xil_printf("value2 = %x \r\n",value);

	//if(value!=0x80)while(1);
	//i2c_init(&IicInstance, 0,100000);
#if 1
	i=0;
	while(1)//配置参数1
	{
		if(SetSCReg(SC030GC[i++]))
			break;

	}

#endif
	 mtcpsr(lev);

	return 0;
}

//void Get_i1280720Reg(struct Image_Reg *IRP)
//{
//	IRP->regP=SC030GC;
//	IRP->regImagep=SC030GC_iRate;
//	IRP->regP2=0;
//	IRP->HH=SC030GC_HH;
//	IRP->VV=SC030GC_VV;
//	IRP->channel=SC030GC_channel;
//
//}

