#include<stdio.h>
int main()
{
	int num, product = 1;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		int digit = num % 10;
		product *= digit;
		num /= 10;
	}
	printf("%d",product);
}

