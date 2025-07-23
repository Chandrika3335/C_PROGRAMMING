#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	char ch;
	while(1)
	{
		printf("enter the character");
		__fpurge(stdin);
		scanf("%c",&ch);
	}
}

