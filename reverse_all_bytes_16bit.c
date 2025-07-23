/*input:0x1234 output:0x3412*/

#include <stdio.h>

unsigned short int swapAllBytes16(unsigned int num) 
{
    return ((num & 0x00FF) << 8) |  
 	   ((num & 0xFF00) >> 8);
}

int main() 
{
    unsigned short int num = 0x1234;
    unsigned short int result = swapAllBytes16(num);

    printf("Input :  0x%X\n", num);
    printf("Output:  0x%X\n", result);  // Expected: 0x3412

    return 0;
}

