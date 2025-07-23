#include<stdio.h>
int main()
{
	int num;
	int a=0, b=1, c;
	printf("enter the number\n");
	scanf("%d",&num);
        
	if(num < 0)
	{
		printf("Invalid input\n");
		return 0;
	}

	if(num == 0)
	{
		printf("Fibonacci number at position 0 is 0\n");
		return 0;
	}
	if(num == 1)
	{
		printf("Fibonacci number at position 1 is 1\n");
		return 0;
	}

	for(int i=2;i<=num;i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	printf("Fibonacci number at position %d is %d\n",num, b);
	return 0;
}
		

		
