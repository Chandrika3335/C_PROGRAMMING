#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int wordcount(char *filename)
{
	char str[100];
	int count = 0;
	FILE *fptr;
	fptr = fopen(filename,"r");
	if(fptr==NULL)
	{
		printf("file not found\n");
		exit(0);
	}

	while(fscanf(fptr,"%s",str)==1)
	{
		count++;
	}

	fclose(fptr);
	return count;
}
int main(int argc,char *argv[])
{
	int cnt;
	if(argc!=2)
	{
		printf("Please enter the input in the format of exe filename\n");
		exit(0);
	}
	cnt = wordcount(argv[1]);
	printf("No of words in the file are : %d\n",cnt);
}




	
