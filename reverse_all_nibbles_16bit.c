#include <stdio.h>

unsigned short swap_nibbles(unsigned short num)
{
    return ((num & 0x000F) << 12) | 
           ((num & 0x00F0) << 4) |
           ((num & 0x0F00) >> 4) | 
           ((num & 0xF000) >> 12); 
          
}

int main() 
{
    unsigned short num = 0x1234;
    unsigned short result = swap_nibbles(num);
    printf("Input :  0x%X\n", num);
    printf("Output:  0x%X\n", result);
    return 0;
}

