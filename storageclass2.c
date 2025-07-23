#include<stdio.h>
void fun();
int main()
{
	int x;
	scanf("%d",&x);
	if(x>0)
	{
		fun();
	}
}
void fun()
{
	int z;
	static int y;
	printf("%d",y);
	printf("%d",z);
}
