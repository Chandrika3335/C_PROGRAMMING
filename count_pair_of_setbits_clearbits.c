#include<stdio.h>
int main()
{
	int num,bit=31, set_pair = 0, clear_pair = 0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(int bit = 31; bit>0; bit-=2)
	{
		int current_bit, next_bit;
		current_bit = (num >> bit) & 1;
		next_bit = (num >> (bit-1)) & 1;

		if(current_bit == 1 && next_bit == 1)
		{
			set_pair++;
		}
		else if(current_bit == 0 && next_bit == 0)
		{
			
			clear_pair++;
		}
		
	}
	printf("%d\n",set_pair);
	printf("%d",clear_pair);
}

