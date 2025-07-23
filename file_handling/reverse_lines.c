#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void strrev(char *p)
{
	int i,j;
	char ch;
	j=strlen(p)-1;
	for(i=0;i<j;i++,j--)
	{
		ch = p[i];
		p[i] = p[j];
		p[j] = ch;
	}
	printf("%s\n",p);
}
void reverselines(char *filename)
{
	FILE *fptr;
	char str[100];
	fptr = fopen(filename,"r+");
	if(fptr==NULL)
	{
		printf("File not found\n");
		exit(0);
	}

	while(fgets(str,100,fptr))
	{
		strrev(str);
		fseek(fptr,-strlen(str),1);
		fputs(str,fptr);
	}
}

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Error\n");
		exit(0);
	}
	reverselines(argv[1]);
}


