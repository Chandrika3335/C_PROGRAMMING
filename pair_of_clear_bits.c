#include<stdio.h>
int main()
{
	int num, bit = 31, pair =0;
	printf("enter the number\n");
	scanf("%d",&num);
	while(bit>0)
	{
		if((num&(1<<bit))==0)
		{
			if((num & (1 << (bit-1)))==0)
			{
				pair++;
				bit--;
			}
		}
		bit--;
	}
	printf("%d",pair);
}


