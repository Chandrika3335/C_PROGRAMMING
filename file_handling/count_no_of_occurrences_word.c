#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int word_occurrence_count(char *filename,char *word)
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
                if(strcmp(str,word)==0)
		{
			count++;
		}
	}
        fclose(fptr);
        return count;
}
int main(int argc,char *argv[])
{
        int cnt;
        if(argc!=3)
        {
                printf("Please enter the input in the format of exe filename word_to_be_search\n");
                exit(0);
        }
        cnt = word_occurrence_count(argv[1],argv[2]);
        printf("No of words in the file are : %d\n",cnt);
}

