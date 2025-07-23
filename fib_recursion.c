#include<stdio.h>
int fib(int);
int main()
{
	int pos,res;
	printf("enter the position");
	scanf("%d",&pos);
	res = fib(pos);
	printf("%d\n",res);
}
int fib(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		return (fib(n-2) + fib(n-1));
	}
}



