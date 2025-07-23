#include<stdio.h>
int main()
{
	int i=50;
	float f=23.5;
	int *ip; float *fp;
	ip=&i; fp=&f;
	++(*ip);
	(*fp)++;
	printf("i=%d f=%f\n",i,f);
}
