#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void strrev(char *p)
{
	int i=0,j;
	char ch;
	j = strlen(p)-2;
	while(i<j)
	{
		ch = p[i];
		p[i] = p[j];
		p[j] = ch;
		i++;
		j--;
	}
	printf("%s",p);

}


void reverse(char *filename)
{
	char str[100];
	FILE *fptr;
        fptr = fopen(filename,"r+");
        if(fptr == NULL)
        {
                printf("File not found\n");
                exit(0);
        }
	
	while(fgets(str,100,fptr))
	{
		strrev(str);
		fseek(fptr, -strlen(str), 1);
		fputs(str,fptr);
	}
	fclose(fptr);
}
	


int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Provide the input in the format of exe source\n");
		exit(0);
	}


	reverse(argv[1]);
	printf("File content reversed successfully\n");


}
