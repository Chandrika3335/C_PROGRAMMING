#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count_no_of_occurrence(char *filename,char *substring)
{
	char str[100];
	int count;
	int len=strlen(substring);
	FILE *fptr;
	
	fptr = fopen(filename,"r");
	if(fptr == NULL)
	{
		printf("File not found\n");
		exit(0);
	}

	while(fgets(str,sizeof(str),fptr)!=NULL)
	
	{
		char *ptr=str;
		while((ptr = strstr(ptr,substring))!=NULL)
		{
			count++;
			ptr += len;
		}
	}


	
	fclose(fptr);
	return count;
}


int main(int argc,char *argv[])
{
	int cnt;
	if(argc!=3)
	{
		printf("enter the input in the format of exe filename substring\n");
		exit(0);
	}

	cnt = count_no_of_occurrence(argv[1],argv[2]);
	printf("%d",cnt);
}


