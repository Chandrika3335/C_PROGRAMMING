#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *fptr1,*fptr2;
	fptr1 = fopen("source.txt","r");
	if(fptr1==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	fptr2= fopen("destination.txt","w");


	while((ch = fgetc(fptr1))!=EOF)
	{
		fputc(ch,fptr2);
	}

	fclose(fptr1);
	fclose(fptr2);
}

