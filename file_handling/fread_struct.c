#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	 char name[20];
	 int roll;
	 int age;
}stu;

int main()
{
	FILE *fptr;
	fptr = fopen("struct_data.txt","r");
	if(fptr==NULL)
	{
		printf("file not found\n");
		exit(0);
	}
	fread(&stu,sizeof(struct student),1,fptr);
	printf("%s %d %d\n",stu.name,stu.roll,stu.age);
}
	
