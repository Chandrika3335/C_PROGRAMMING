//typedef with Structure
#include<stdio.h>
typedef struct student
{
	char name[20];
	int roll;
}STUDENT;

int main()
{
	STUDENT var;
        printf("enter the name\n");
	scanf("%s",var.name);
	printf("enter the roll\n");
	scanf("%d",&var.roll);
	printf("%s\n",var.name);
	printf("%d\n",var.roll);
}


