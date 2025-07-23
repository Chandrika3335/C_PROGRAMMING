#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the string:\n");
	fgets(str, sizeof(str), stdin);
	if(str[strlen(str)-1] == '\n')
	{
		str[strlen(str)-1] = '\0';
	}

	char *word = strtok(str," ");
	int count = 0;
	while(word!=NULL)
	{
		count++;
		word = strtok(NULL, " ");
	}
	printf("%d",count);
	return 0;
}


