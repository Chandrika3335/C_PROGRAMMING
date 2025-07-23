#include<stdio.h>
int main()
{
	int num=5;
	int bit = 2;
	if((num & (1 << bit))==0)
	{
		printf("bit is clear");
	}
	else
	{
		printf("bit is set");
	}
}
