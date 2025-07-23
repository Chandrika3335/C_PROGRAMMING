#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
        if(argc != 3)
	{
		printf("Give input in the format of exe source destination\n");
		exit(0);
	}
        char ch;
	FILE *fptr1,*fptr2;
	fptr1 = fopen(argv[1],"r");
	if(fptr1==NULL)
	{
		printf("FIle not found\n");
		exit(0);
	}

	fptr2= fopen(argv[2],"w");

	while((ch = fgetc(fptr1))!=EOF)
	{
		fputc(ch,fptr2);
	}
	fclose(fptr1);
	fclose(fptr2);
}

