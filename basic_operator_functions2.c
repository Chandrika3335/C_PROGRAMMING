#include<stdio.h>
void f2(int x,int y);
{
	printf("f1...x=%d y=%d\n",x,y);
	return;
}
int main()
{
	int a=10, b=20;
	printf("in main...a=%d b=%d\n",a,b);
	f2(++a,b--);
	printf("in main...a=%d b=%d\n",a,b);
	return 0;
}
