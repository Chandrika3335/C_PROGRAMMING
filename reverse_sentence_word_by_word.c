#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,sizeof(str), stdin);
	if(str[strlen(str)-1]=='\n')
	{
		str[strlen(str)-1] = '\0';
	}
	char *words[100];
	int count = 0;
	char *word = strtok(str, " ");
	while(word!=NULL)
	{
		words[count++] = word;
		word = strtok(NULL, " ");
	}

	for(int i=count - 1; i>=0; i--)
	{
		printf("%s ", words[i]);
	}
	return 0;
}



