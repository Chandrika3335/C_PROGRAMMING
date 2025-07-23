#include<stdio.h>
void fun(int *p,int q)
{
	printf("in fun...%d %d\n",++*p,++q);
}
int main()
{

	int x=10,y=20;
	fun(&x,y);
	printf("in main...%d %d\n",x,y);
}
