#include<stdio.h>
int main()
{
	int a=6,b=1,c=0;
	c = a & b;
	printf("%d\n",c);
	c = a | b;
	printf("%d\n",c);
	c = a ^ b;
	printf("%d\n",c);
	c = ~a;
	printf("%d\n",c);
	c = ~b;
	printf("%d\n",c);
}
