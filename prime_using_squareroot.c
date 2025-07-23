#include<stdio.h>
#include<math.h>
int main()
{
	int num,i;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=2;i<=sqrt(num);i++)
	{
		if((num%i)==0)
		{
			break;
		}
	}
	if(i<=sqrt(num))
	{
		printf("not a prime");
	}
	else
	{
		printf("prime");
	}
}

