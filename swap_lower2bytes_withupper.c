#include<stdio.h>
unsigned int swap_two_bytes(int num)
{
    return ((num & 0x0000FFFF) << 16) | ((num & 0xFFFF0000) >> 16);
}

int main()
{
    unsigned int num = 0x12345678;
    
    unsigned int result = swap_two_bytes(num);
    
    printf("0x%X\n", num);
    
    printf("0x%X", result);
}
