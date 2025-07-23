#include<stdio.h>


unsigned int swap_bytes(unsigned int num) 
{
    return ((num & 0x000000FF) << 24) |
           ((num & 0x0000FF00) << 8)  |
           ((num & 0x00FF0000) >> 8)  |
           ((num & 0xFF000000) >> 24);
}

int main() 
{
    unsigned int num = 0x12345678;
    unsigned int byte_swapped = swap_bytes(num);
    printf("Before swapping bytes: 0x%X\n", num);
    printf("After swapping bytes: 0x%X\n", byte_swapped);

    return 0;
}

