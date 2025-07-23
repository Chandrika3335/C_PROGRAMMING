#include<stdio.h>
int fun(int);
int g;
int main()
{
	int a;
	printf("a=%d\n",a);
	fun(a+g);
	printf("g=%d\n",g);
}
int fun(int b)
{
	printf("b=%d\n",b);
}



