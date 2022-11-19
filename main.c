#include "crc8.h"
#include <stdio.h>

int main(void)
{
	uint8_t buffer_01[9] = { 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39 };
	uint8_t buffer_02[5] = { 0x35, 0x36, 0x37, 0x38, 0x39 };
	uint8_t check_01 = 0, check_02 = 0;

	check_01 = crc8_compute(buffer_01, sizeof(buffer_01));
	check_02 = crc8_compute_bool(buffer_01, 4, TRUE);
	check_02 = crc8_compute_bool(buffer_02, 5, FALSE);

	printf("check_01 = %#x\r\n", check_01);
	printf("check_02 = %#x\r\n", check_02);
}