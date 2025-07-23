#include<stdio.h>
int isprime(int num)
{
	if(num <= 0)
	{
		return 0;
	}
	for(int i=2;i<=num/2;i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	

	}
	return 1;
}

int endswith7(int num)
{
	if(num % 10 == 7)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int start,end;
	printf("enter the starting and ending values\n");
        scanf("%d%d",&start,&end);
	for(int i=start;i<end;i++)
	{
		if(isprime(i) && endswith7(i))
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}

