#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char name[20];
	int age,roll;

	FILE *fptr;
	fptr = fopen("Student_Details.txt","r");
	if(fptr == NULL)
	{
		printf("File not found\n");
		exit(0);
	}

	while(fscanf(fptr,"%s",name)==1)
	{
		printf("%s",name);
		break;
	}

	fclose(fptr);

}
