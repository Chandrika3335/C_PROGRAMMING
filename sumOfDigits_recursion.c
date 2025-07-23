#include<stdio.h>
int sumOfDigits(int);
int main()
{
	int num=12,sum;
	sum = sumOfDigits(num);
	printf("%d",sum);
}
int sumOfDigits(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return ((n%10) + sumOfDigits(n/10));
	}
}

