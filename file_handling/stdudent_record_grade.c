#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	struct record
	{
		char name[20];
		int roll;
		int marks;
	}stu;

	FILE *fptr;
	fptr = fopen("student_record","r");
	if(fptr==NULL)
	{
		printf("file not found\n");
		exit(0);

	}
	printf("\nname\t\tMarks\t\tGrade\n\n");

	while(fread(&stu,sizeof(stu),1,fptr)==1)
	{
		printf("%s\t\t",stu.name);
		printf("%d\n\t",stu.roll);
		if(stu.marks>=80)
		{
			printf("A\n");
		}
		else if(stu.marks>=60 && stu.marks<80)
		{
			printf("B\n");
		}
		else
		{
			printf("C\n");
		}
	}
	
	fclose(fptr);
	return 0;
}
