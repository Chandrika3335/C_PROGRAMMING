#include<stdio.h>
int main()
{
	int num=5;
	int bit=1;
	if(num&(1<<bit))
	{
		printf("Set");
	}
}

