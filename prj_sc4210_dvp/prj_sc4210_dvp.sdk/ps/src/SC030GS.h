#ifndef SC030GS_H_
#define SC030GS_H_


#define IIC_DEVICE 		0x30
#define IMAGE_WIDTH		2560
#define IMAGE_HEIGHT	1440
#define IMAGE_SIZE		IMAGE_WIDTH * IMAGE_HEIGHT

int SC030GS_init(void);
unsigned int *SC030GS_CreateWindows(unsigned short H_start,unsigned short W_start, unsigned short HH,unsigned short VV);
unsigned int *SC030GS_SetPixle(unsigned short HH,unsigned short VV);


#endif


