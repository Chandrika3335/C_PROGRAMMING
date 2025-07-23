#include<stdio.h>
int *check(int, int);
int main()
{
	int *c;
	c = check(10,20);
	printf("%d",*c);
	return 0;
}
int *check(int i,int j)
{
	int *p, *q;
	p=&i;
	q=&j;
	if(i>=45)
		return(p);
	else
		return(q);
}
