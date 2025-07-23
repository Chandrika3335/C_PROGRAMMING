#include<stdio.h>
int main()
{
	int num;
	int i,count=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if((num%i)==0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
}


