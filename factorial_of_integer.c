#include<stdio.h>
int isfactorial(int num)
{
	if(num < 0)
	{
		return 0;
	}
	int fact = 1;
	for(int i=1;i<=num;i++)
	{
		fact *= i;
	}
	return fact;
}
int main()
{
	int num;
	printf("Enter teh number\n");
	scanf("%d",&num);

	if(num < 0)
	{
		printf("Error\n");
	}
	else
	{
		int result = isfactorial(num);
	
	printf("%d",result);
	}
}
