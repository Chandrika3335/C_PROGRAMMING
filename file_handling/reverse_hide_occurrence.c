#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * readFromFile(char *filename)
{
	char *p=NULL;
	long int size;
	int firstoccurrence= 1;
	FILE *fptr;
	fptr = fopen(filename,"r+");
	if(fptr == NULL)
	{
		printf("file not found\n");
		exit(0);
	}

	fseek(fptr,0,2);
	size = ftell(fptr);
	rewind(fptr);
	p = calloc(1,size+1);
	fread(p,size,1,fptr);
	p[size] = '\0';
	fclose(fptr);
	return p;
}
void strrev(char *str,int length)
{
	int i,j;
	for(i=0,j=length-1; i<j; i++,j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

}


char occurrence_of_word(char *p,char *s)
{
	int first_occurrence=1;
	int l1 = strlen(s);
	char *ptr = p;
	while((ptr = strstr(ptr,s)) != NULL)
	{
		if(first_occurrence)
		{
			strrev(ptr,l1);
			first_occurrence = 0;
		}
		else
		{
			strncpy(ptr,"***",10);
		}
		ptr += l1;
	}
}
void WritetoFile(char *buff,char *filename)
{
        FILE *fp;
        fp = fopen(filename,"w");
        fwrite(buff,strlen(buff),1,fp);
        fclose(fp);
}


int main(int argc,char *argv[])
{
	char *buff = NULL;
	if(argc!=3)
	{
		printf("enter the input in the format of exe filename string_to_be_searched\n");
		exit(0);
	
	}
	buff = readFromFile(argv[1]);
	occurrence_of_word(buff,argv[2]);
	WritetoFile(buff,argv[1]);
}




