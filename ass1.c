#include<stdio.h>
int main()
{
	unsigned char v1 = '2' ;
	printf("v1 = %c %d\n", v1,v1);
	v1 = v1 * 2;
	printf("v1 = %c %d\n", v1,v1);
	v1 = v1 * 2;
	printf("v1 = %c %d\n", v1,v1);
}
