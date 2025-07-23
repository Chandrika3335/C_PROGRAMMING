#include<stdio.h>
int main()
{
	int num, fact = 1, i;
	printf("Enter the number\n");
	scanf("%d", &num);
	if(num < 0)
	{
		printf("Factorial does not exist\n");
	}
	else
	{
	       for(i=1; i <=num; i++)
	       {
	            fact = fact * i;
	       }
	       printf("Factorial of a %d is %d",num, fact);
	}
	return 0;
}
