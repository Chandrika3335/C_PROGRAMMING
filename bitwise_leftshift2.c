#include<stdio.h>
int main()
{
	int a=1,b=0,c=-1,d=-1,e=-1;
	b = a << 10;
	c = b << 10;
	d = c << 10;
	e = d << 1;
	printf("%d %d %d %d %d",a,b,c,d,e);

}
