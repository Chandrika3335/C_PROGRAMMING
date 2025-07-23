#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the string:");
	fgets(str, sizeof(str), stdin);
	if(str[strlen(str)-1]=='\n')
	{
		str[strlen(str)-1] = '\0';
	}

	for(int i=strlen(str)-1; i>=0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}


