#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void grep_command(char *filename, const char *word)
{
	FILE *fptr;
	fptr = fopen(filename,"r");
	if(fptr == NULL)
	{
		printf("file not found\n");
		exit(0);
	}

        char str[100], found = 0;
	while(fgets(str,sizeof(str),fptr)!=NULL)
	{
		if(strstr(str,word))
		{
			printf("%s",str);
			found = 1;
		}
		
	}
	if(found == 0)
	{
		printf("not found\n");
	}
        

	fclose(fptr);
}

int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Error\n");
		exit(0);
	}

	grep_command(argv[1],argv[2]);
	return 0;
}

