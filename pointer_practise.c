#include<stdio.h>
int main()
{
	int a=420;
	int *ptr=&a;
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%u\n",ptr);
	printf("%d\n",*ptr);
}
