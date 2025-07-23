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
	int max_len = 0;
	char *longest_word = NULL;

	while(word!=NULL)
	{
		int len = strlen(word);
		if(len >= max_len)
		{
			max_len = len;
			longest_word = word;
		}
		word = strtok(NULL, " ");
	}
	if(longest_word)
	{
		printf("%s", longest_word);
	}
	else
	{
		printf("no word found\n");
	}

	return 0;
}





