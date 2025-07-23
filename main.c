#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *fptr=NULL;
	fptr = fopen("chandrika.txt","w");
	if(fptr == NULL)
	{
		printf("file not found\n");
		exit(0);
	
	}
	fputs("Chandrika",fptr);
	fclose(fptr);
}


