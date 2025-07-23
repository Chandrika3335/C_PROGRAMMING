#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter the string:");
	fgets(str, sizeof(str), stdin);
	if(str[strlen(str)-1] == '\n')
		str[strlen(str)-1] = '\0';
	char ch;
	printf("enter the charcater to search\n");
	scanf("%c",&ch);
         int count;
	for(int i=0;str[i];i++)
	{
		if(str[i] == ch)
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("%d",count);
	}
	else
	{
		printf("no characters found\n");
	}
}

			
