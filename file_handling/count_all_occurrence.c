#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count_all_occurrence(char *filename, char *sub)
{
	char str[20];
	int cnt = 0;
	int len = strlen(sub);
	FILE *fptr;
	fptr = fopen(filename, "r");
	if(fptr==NULL)
	{
		printf("error\n");
		exit(0);
	}
	
	while(fgets(str, sizeof(str), fptr)!=NULL)
	{
		char *ptr = str;
		while((ptr = strstr(ptr, sub))!=NULL)
		{
			cnt++;
			ptr += len;
		}
	}
	fclose(fptr);
	return cnt;
}


int main(int argc, char *argv[])
{
	int cnt;
	if(argc!=3)
	{
		printf("enter the input in the format of exe filename substring\n");
		exit(0);
	}
	cnt = count_all_occurrence(argv[1], argv[2]);
	printf("%d",cnt);
}

