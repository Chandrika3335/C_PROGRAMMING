#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	if(argc != 3)
	{
		printf("exe source destination\n");
		exit(0);
		
	}
	char str[100];
	FILE *fptr1,*fptr2;
	fptr1 = fopen(argv[1],"r");
	if(fptr1==NULL){
		printf("File not found\n");
		exit(0);
	}

	fptr2 = fopen(argv[2],"w");

	fgets(str,sizeof(str),fptr1);
	fputs(str,fptr2);


	fclose(fptr1);
	fclose(fptr2);
}

