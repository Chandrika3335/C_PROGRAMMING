#include<stdio.h>
int main()
{
	char i,j;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}

