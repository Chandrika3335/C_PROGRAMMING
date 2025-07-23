#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter three integers\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("num1 is greater");
		}
		else
		{
			printf("num2 is greater");
		}
	}
	else
	{
		if(num2>num3)
		{
			printf("num2 is greater");
		}
		else
		{
			printf("num3 is greater");
		}
	}
	
}
