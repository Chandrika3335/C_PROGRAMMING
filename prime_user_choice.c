#include<stdio.h>
#include<math.h>
int main()
{
	int user_choice,N,count=0;
	printf("enter the user choice\n");
	scanf("%d",&user_choice);
	printf("enter the no of prime you want to print\n");
	scanf("%d",&N);

	while(count < N)
	{
		int isprime = 1;

		if( user_choice <= 1)
		{
			user_choice++;
			continue;
		}
		for(int i=2; i<=sqrt(user_choice); i++)
		{
			if(user_choice % i == 0)
			{
				isprime = 0;
				break;
			}

		}
		if(isprime)
		{
			printf("%d\n", user_choice);
				count++;
		}
		user_choice++;
	}
}
