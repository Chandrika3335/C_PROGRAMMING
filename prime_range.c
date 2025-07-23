#include<stdio.h>
#include<math.h>
int main()
{
	int min=3,max=30,i;
	for(int num=min; num<=max; num++)
	{
		if(num<=1)
		{
			continue;
		}
	
	int isprime = 1;

	for(int i=2; i<=sqrt(num); i++)
	{
		if(num%i == 0)
		{
			isprime = 0;
			break;
		}

	}
	if(isprime)
	{
		printf("%d\n",num);
	}
	}
}




