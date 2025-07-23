#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *fptr;
	fptr = fopen("source.txt","r");
	if(fptr== NULL)
	{
		printf("File not found\n");
		exit(0);
	}

	fseek(fptr, 3, SEEK_SET);
	printf("%u\n",ftell(fptr));
	ch = fgetc(fptr);
	printf("%c\n",ch);

	fseek(fptr, -2, SEEK_CUR);
	printf("%u\n",ftell(fptr));
	ch = fgetc(fptr);
	printf("%c\n",ch);

	fseek(fptr, 0 , SEEK_END);
	printf("%u\n",ftell(fptr));

	rewind(fptr);
	printf("%u\n",ftell(fptr));



	fclose(fptr);
}
