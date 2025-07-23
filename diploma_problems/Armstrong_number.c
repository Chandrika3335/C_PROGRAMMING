#include<stdio.h>
int main()
{
	int num, sum = 0, digit, temp;
	printf("enter the number\n");
	scanf("%d",&num);
        temp = num;
	while(num != 0)
	{
		digit = num % 10;
		sum += (digit*digit*digit);
		num = num / 10;
	}
	if(sum == temp)
	{
		printf("Armstrong number\n");
	}
	else
	{
		printf("Not Armstrong Number\n");
	}
	return 0;
}
