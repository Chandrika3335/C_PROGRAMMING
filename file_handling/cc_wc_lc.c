#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int character_word_line_count(char *filename)
{
	FILE *fptr;
	fptr = fopen(filename,"r");
	if(fptr == NULL)
	{
		printf("file not found\n");
		exit(0);
        }

	int characters = 0, words = 0,lines = 0;
	char ch, prev = ' ';

	while((ch = fgetc(fptr))!=EOF)
	{
		characters++;
		if(ch == '\n')
		{
			lines++;
		}
		if((ch == ' ' || ch == '\t' || ch == '\n') && (prev != ' ' && prev != '\t' && prev != '\n'))
		{
			words++;

		}

		prev = ch;
	}

	if(prev !=' '&& prev !='\t' && prev != '\n')
	{
		words++;


	printf("Characters: %d\nWords: %d\nLines: %d\n",characters,words,lines);
	fclose(fptr);
}


int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Error\n");
		exit(0);
	}

	character_word_line_count(argv[1]);

}
