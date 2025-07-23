#include<stdio.h>
int main()
{
	int i=-1;
	int result;
	result = (int)sizeof(i)>i;
	printf("result=%d\n",result);
}
