#include<stdio.h>
int fact(int);
int main()
{
	int num=6,result;
	result = fact(num);
	printf("%d",result);
}
int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1));
	}
}


