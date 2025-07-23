#include<stdio.h>
int main()
{
	int num,current,prev=9;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		current = num % 10;
		if(current < prev)
		{
			prev = current;
		}
		else
		{
			break;
		}
		num = num / 10;
	}
	if(num == 0)
	{
		printf("ascending order\n");
	}
	else
	{
		printf("not in ascending order\n");
	}
}
