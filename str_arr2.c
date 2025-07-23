#include<stdio.h>
int main()
{
	char str[]="abcd1234";
	char *p=str;
	unsigned int *q=str;
	printf("%x\n",*q);
	printf("%x\n",*p);
}
