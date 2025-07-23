#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void InsertLinetoFile(const char *file1,const char *file2, int lineno)
{
	FILE *fptr1 , *fptr2, *temp;
	char buffer[100];
	int currentLine = 1;
	fptr1 = fopen(file1,"r");
	fptr2 = fopen(file2,"r");
	if(fptr1 == NULL && fptr2 == NULL)
	{
		printf("file not found\n");
		exit(0);
	}

	temp = fopen("temp.txt","w");


	while((fgets(buffer,sizeof(buffer),fptr1)) != NULL)
	{
		if(currentLine == lineno)
		{
			char buffertemp[100];
			while((fgets(buffertemp,sizeof(buffertemp),fptr2))!=NULL)
			{
				fputs(buffertemp,temp);
			}
		}
	}
	fputs(buffer,temp);
	currentLine++;

	if(currentLine <= lineno)
	{
		char tempBuffer[100];
		while((fgets(tempBuffer,sizeof(tempBuffer),fptr2))!=NULL)
		{
			fputs(tempBuffer,temp);
		}
	}
	
	fclose(fptr1);
	fclose(fptr2);
	fclose(temp);


	remove(file1);
	rename("temp.txt",file1);

        printf("Successfully inserted content from %s into %s at line %d\n", file2, file1, lineno);
}
			
int main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("enter the input in the format of exe file1 file2 lineno\n");
		exit(0);
	}

	int line_number = atoi(argv[3]);
	if(line_number<1)
	{
		printf("the line number should be greater than 0\n");
		exit(0);
	}


	return 0;
}
	
