#include<stdio.h>
int main()
{
	int num, sum = 0;
	int digit;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num > 0)
	{
		digit = num % 10;
		sum = sum + digit;
		num /= 10;
	}

	printf("Sum of digits is %d\n", sum);

	while(sum >= 10)
	{
		int temp = sum;
		sum = 0;
		while(temp > 0)
		{
			sum += temp % 10;
			temp /= 10;
		}
	}
	printf("Sum of digits finally reduced to %d\n",sum);
	return 0;
}


