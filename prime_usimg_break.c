#include<stdio.h>
int main()
{
	int num;
	int i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if((num%i)==0)
		{
			break;
		}
	}
	if(num==i)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
