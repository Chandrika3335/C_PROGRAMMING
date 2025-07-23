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
	

        int count = 0;
	char *words[100];
	char *word = strtok(str, " ");
	while(word != NULL)
	{
		words[count++] = word;
		word = strtok(NULL, " ");
	}
	if(count >= 2)
	{
		char *first_word = words[0];
		char *last_word = words[count - 1];


		int len1 = strlen(first_word);
		int len2 = strlen(last_word);

		if(len1 == len2)
		{
			for(int i=0; i<len1; i++)
			{
				char temp = first_word[i];
				first_word[i] =  last_word[i];
				last_word[i] = temp;
			}
		}
	}

	//printf("Output string is:");
	for(int i=0; i < count; i++)
	{
		printf("%s ", words[i]);
	}
	printf("\n");
	return 0;



}	
