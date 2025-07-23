#include<stdio.h>
int main()
{
	int num,digit,high=0,shigh=0;
	printf("enterthe number\n");
	scanf("%d",&num);
	while(num>0)
	{
		digit = num % 10;
		if(digit > high)
		{
			shigh = high;
			high = digit;
		}
		else
		{
			if((digit!= high) && ( digit > shigh))
			{
				shigh = digit;
			}
		}
		num = num / 10;
	}
	printf("Second highest of the integer=%d", shigh);
}
