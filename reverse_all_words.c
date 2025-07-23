#include<stdio.h>
#include<string.h>
char *reverse(char *str)
{
	int i=0;
	int j = strlen(str)-1;
	while(i<j)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int main()
{
	char str[100];
	printf("enter the string:");
	fgets(str, sizeof(str),stdin);
	if(str[strlen(str)-1] == '\n')
	{
		str[strlen(str)-1] = '\0';
	}

	char *word = strtok(str, " ");
	while(word!=NULL)
	{
		reverse(word);
		printf("%s ", word);
		word = strtok(NULL, " ");
	}
	printf("\n");
	return 0;
}

