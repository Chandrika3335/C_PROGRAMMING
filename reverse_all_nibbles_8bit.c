#include <stdio.h>

unsigned char swap_nibbles(unsigned char num)
{
    return ((num & 0x0F) << 4) | 
           ((num & 0xF0 >> 4); 
          
}

int main() 
{
    unsigned char num = 0x1234;
    unsigned char result = swap_nibbles(num);
    printf("Input :  0x%X\n", num);
    printf("Output:  0x%X\n", result);
    return 0;
}

