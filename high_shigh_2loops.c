#include<stdio.h>
int main()
{
	int num,temp,high=0,shigh=0,digit;
	printf("enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		digit = num % 10;
		if(digit>high)
		{
			high  = digit;
		}
		num = num/10;
	}
	printf("Highest of the integer=%d\n",high);
	num = temp;
	while(num>0)
	{
		digit = num % 10;
		if((digit!=high) && (digit>shigh))
		{
			shigh = digit;
		}
		num = num / 10;
	}
	printf("Second highest of the integer=%d\n",shigh);

}


