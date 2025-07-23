#include <stdio.h>

unsigned int swapSpecificBytes(unsigned int num, int b1, int b2)
{
    // Extract the byte at position b1
    unsigned int byte1 = (num >> (b1 * 8)) & 0xFF;

    // Extract the byte at position b2
    unsigned int byte2 = (num >> (b2 * 8)) & 0xFF;

    // Clear the byte at position b1 (set those 8 bits to 0)
    num &= ~(0xFF << (b1 * 8));

    // Clear the byte at position b2
    num &= ~(0xFF << (b2 * 8));

    // Place byte1 into position b2
    num |= (byte1 << (b2 * 8));

    // Place byte2 into position b1
    num |= (byte2 << (b1 * 8));

    return num;
}

int main()
{
    unsigned int num = 0x12345678;

    //Swap byte 0 and byte 3 (LSB-0 and MSB-3)
    unsigned int result = swapSpecificBytes(num, 0, 3);

    //Print input and output values in hexadecimal
    printf("Input :  0x%X\n", num);     
    printf("Output:  0x%X\n", result); 

    return 0;
}

/*#include<stdio.h>
unsigned int swapSpecificBytes(unsigned int num)
{
	unsigned int byte1=(num & 0x000000FF)<<24;
	unsigned int byte2=(num & 0x0000FF00);
	unsigned int byte3=(num & 0x00FF0000);
	unsigned int byte4=((num & 0xFF000000)>>24);

	return (byte1+byte2+byte3+byte4);
}
int main()
{
    unsigned int num = 0x12345678;

    unsigned int result = swapSpecificBytes(num);

    printf("Input :  0x%X\n", num);
    printf("Output:  0x%X\n", result); //0x78345612

    return 0;
}*/
