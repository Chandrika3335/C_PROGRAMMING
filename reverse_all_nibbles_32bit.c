#include<stdio.h>
unsigned int swap_nibbles(unsigned int num)
{
    return  ((num & 0x0000000F)<<28) |
            ((num & 0x000000F0)<<20) |
            ((num & 0x00000F00)<<12) |
            ((num & 0x0000F000)<<4)  | 
            ((num & 0x000F0000)>>4)  |
            ((num & 0x00F00000)>>12) |
            ((num & 0x0F000000)>>20) |
            ((num & 0xF0000000)>>28);
        

}
int main()
{
    unsigned int num = 0x12345678;
    unsigned int result = swap_nibbles(num);
    printf("Input:0x%x\n",num);
    printf("Output:0x%x",result);
    
}
