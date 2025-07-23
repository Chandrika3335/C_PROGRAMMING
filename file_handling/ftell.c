#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
        char ch;
	FILE *fptr1;
	fptr1 = fopen("source.txt","r");
	if(fptr1 == NULL)
	{
		printf("FIle not found\n");
	        exit(0);
	}

	printf("%u\n",ftell(fptr1));
	ch = getc(fptr1);
	printf("%c\n",ch);
	printf("%u\n",ftell(fptr1));
        ch = getc(fptr1);
        printf("%c\n",ch);
	printf("%u\n",ftell(fptr1));
        ch = getc(fptr1);
        printf("%c\n",ch);

	fclose(fptr1);
}
