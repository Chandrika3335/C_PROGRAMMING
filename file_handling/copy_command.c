#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void copyFile(const char *file1,char *file2)
{
	FILE *src=fopen(file1,"r");
        if(src == NULL)
	{
		printf("file not found\n");
		exit(0);
	}

	FILE *dest = fopen(file2,"w");

	char str[1000];
	while(fgets(str,sizeof(str),src))
	{
		fputs(str,dest);
	}

	fclose(src);
	fclose(dest);
	printf("copy succesfull\n");

}
	 	
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("enter the input in the format of exe sourcefile destinationfile\n");
		exit(0);
	}

	copyFile(argv[1],argv[2]);
}
