#include<stdio.h>
#define swap_nibble(NUM)  (NUM = ((NUM>>4) | (NUM<<4)))
int main()
{
	char ch = 0x87;
	printf("Before swapping=%x\n",ch);
	swap_nibble(ch);
	printf("After swapping=%x\n",ch);
}
