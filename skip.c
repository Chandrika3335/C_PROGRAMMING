#include<stdio.h>
int main()
{
	int a=5, b=0, c=-3, d=-1;
	printf("%d %d %d %d\n",a,b,c,d);
	d= ++b && ++c && ++a;
	printf("%d %d %d %d\n",a,b,c,d);

}





