#include<stdio.h>
int main()
{
	char ch;
	int bit = 7;
	printf("enter the character\n");
	scanf("%ch",&ch);
	while(bit>=0)
	{
		if(ch & (1<<bit))
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
}

