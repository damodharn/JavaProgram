#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h> 
int main(void)
{
	uint32_t u32RawData;
	uint8_t *pu8CheckData;
	u32RawData = 0x11223344; //Assign data 

	pu8CheckData = (uint8_t *)&u32RawData; //Type cast

	if (*pu8CheckData == 0x44) //check the value of lower address
	{
		printf("little-endian\n");
	}
	else if (*pu8CheckData == 0x11) //check the value of lower address
	{
		printf("big-endian\n");
	} 
	return 0;
}
