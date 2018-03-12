#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "led7seg.h"


//	115200 8N1
//	aa 55 02 cc 03 d1
//	aa 55 02 cc 03 d1
//	aa 55 02 cc 03 d1
//	aa 55 02 cc 03 d1
//	<0xaa> <0x55> <length:1> <icon:1> <number:1> <checksum:1>

int kg68iot_led7_pdu(uint8_t *buf, int length, uint8_t digit, uint8_t icon)
{
	int i;

	if(length < 6)
		return -1;
	buf[0] = 0xaa;
	buf[1] = 0x55;
	buf[2] = 2;
	buf[3] = digit;
	buf[4] = icon;
	buf[5] = buf[2] + buf[3] + buf[4];
	for(i=6;i<length || i < 10;i++)
	{
		buf[i] = 0xff;
	}
	return i;
}
