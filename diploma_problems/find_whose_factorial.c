#include<stdio.h>
int find_factorial_base(int num)
{
	int fact = 1;
	int i = 1;
	while(fact < num)
	{
		i++;
		fact = fact * i;
	}
	if(fact == num)
	{
		return i;
	}
	else
	{
		return -1;
	}
}


int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d", &num);

	int result = find_factorial_base(num);

	if(result != -1)
	{
		printf("The number whose factorial of %d is %d", num, result);
	}
	else
	{
		printf("The factorial for the %d doesn't exist", num);
	}
	return 0;
}

