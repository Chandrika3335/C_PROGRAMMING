#include<stdio.h>
int main()
{
	int num, bit = 31, pair =0;
	printf("enter the number\n");
	scanf("%d",&num);
	while(bit >=1)
	{
		if(num&(1<<bit))
		{
			if(num & (1<<(bit-1)))
			{
				pair++;
				bit--;
			}
		}
		bit--;
	}
	printf("%d",pair);
}

