#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char *readFromFile(char *filename)
{
	FILE *fptr;
	char *p=NULL;
	long int size;
	fptr = fopen(filename,"r");
	if(fptr==NULL)
	{
		printf("file not found\n");
		exit(0);
	}

	fseek(fptr,0,2);
	size = ftell(fptr);
	rewind(fptr);
	p = calloc(1,size+1);
	fread(p,size,1,fptr);
	p[size]='\0';
	fclose(fptr);
	return p;
}
char *Replacesubstring(char *str,char *s1,char *s2)
{
	long int l1,l2,i;
	l1 = strlen(s1);
	l2 = strlen(s2);
	char *p = NULL;
	p = str;
	while(p=strstr(p,s1))
	{

		i = p - str;
		if(l2>l1)
		{
			str= realloc(str,strlen(str)+1+l2-l1);
			if(str+i!=p)
			{
				p = str+i;
			}
			memmove(p+l2,p+l1,strlen(p+l1)+1);
		}
		else if(l2<l1)
		{
			memmove(p+l2,p+l1,strlen(p+l1)+1);
			str = realloc(str,strlen(str)+1);
		}
		strncpy(p,s2,l2);
		p = p+l2;
	}
	return str;
}

void WritetoFile(char *buff,char *filename)
{

        FILE *fp= fopen(filename, "w");
	fwrite(buff,strlen(buff),1,fp);
	fclose(fp);
}

int main(int argc,char *argv[])
{
	char *buff=NULL;
	if(argc!=4)
	{
		printf("enter the input in the format of exe filename substring newstring\n");
		exit(0);
	}

	buff=readFromFile(argv[1]);
	buff= Replacesubstring(buff,argv[2],argv[3]);
	WritetoFile(buff,argv[1]);
}

 replace_substring_newstring.c
