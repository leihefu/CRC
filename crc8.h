#ifndef __CRC8_H
#define __CRC8_H

#include <stdint.h>

#define FALSE   (0)
#define TRUE    (!FALSE)  

#define CRC8_POLY	0x07	//多项式
#define CRC8_INIT	0x00	//初始值
#define CRC8_XOROUT	0x00	//结果异或值
#define CRC8_WIDTH	0x08	//位宽

uint8_t crc8_compute(uint8_t* buffer, uint16_t length);
uint8_t crc8_compute_bool(uint8_t* buffer, uint16_t length, uint8_t state);

#endif


