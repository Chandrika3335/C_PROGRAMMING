#include<stdio.h>
int main()
{
	char c1='a',c2;
	char *p1=&c1, *p2=&c2;
	*p2=*p1;
	printf("c1=%c c2=%c\n",c1,c2);
}
