#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rev(char *str)
{
	int i,j;
	char temp;
	j= strlen(str)-1;
	for(i=0;i<j;i++,j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
void  reverse_a_word(char *filename,char *word)
{
        char str[100];
        //int count = 0;
        FILE *fptr;
        fptr = fopen(filename,"r+");
        if(fptr==NULL)
        {
                printf("file not found\n");
                exit(0);
        }

        while(fscanf(fptr,"%s",str)==1)
        {
                if(strcmp(str,word)==0)
		{
			rev(str);
			fseek(fptr,-strlen(str),SEEK_CUR);
			fputs(str,fptr);
		}
        }

        fclose(fptr);
}
int main(int argc,char *argv[])
{
        int cnt;
        if(argc!=3)
        {
                printf("Please enter the input in the format of exe filename\n");
                exit(0);
        }
        reverse_a_word(argv[1],argv[2]);
        
}

