#include<stdio.h>
unsigned int reverse_nibbles(unsigned int num)
{
	unsigned int result = 0;
	for(int i=0;i<=7; i++)
        {
                unsigned int nibble = (num >> (i * 4)) & 0xF;

                result |= (nibble << ((7-i)*4));
        }
        return result;
}
int main()
{
	unsigned int num = 0x12345678;

	unsigned int output = reverse_nibbles(num);

	printf("0x%x", output);

}

