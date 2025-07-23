#include<stdio.h>
int main()
{
	int num,bit=31;
	printf("enter the number\n");
	scanf("%d",&num);
	while(bit>=0)
	{
		if(num & (1<<bit))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		bit--;
	}
	printf("\n");
	return 0;
}
