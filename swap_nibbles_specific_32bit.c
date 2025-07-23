#include<stdio.h>
unsigned int swap_nibbles_specific(unsigned int num, int n1, int n2)
{
    unsigned int nibble1 = (num >> (n1 * 4)) & 0xF;
    unsigned int nibble2 = (num >> (n2 * 4)) & 0xF;
    
    
    num &= ~(0xF << (n1 * 4));
    num &= ~(0xF << (n2 * 4));
    
    num |= (nibble1 << (n2 * 4));
    num |= (nibble2 << (n1 * 4));
    
    return num;
}
int main()
{
    unsigned int num = 0x12345678;
    unsigned int result = swap_nibbles_specific(num, 6 , 1);
    printf("Input:0x%x\n",num);
    printf("Output:0x%x",result);
}
