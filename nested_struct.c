#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	float marks;
	struct DOB
	{
		int day;
		int month;
		int year;
	}dob;
}var;
int main()
{
	printf("enter the struct student details\n");
	printf("enter the name\n");
	fgets(var.name,20,stdin);
	printf("enter the roll\n");
	scanf("%d",&var.roll);
	printf("enter the marks\n");
	scanf("%f",&var.marks);
	printf("enter the struct dob details\n");
	printf("enter the day\n");
	scanf("%d",&var.dob.day);
	printf("enter the month\n");
	scanf("%d",&var.dob.month);
	printf("enter the year\n");
	scanf("%d",&var.dob.year);


	printf("%s %d %f\n",var.name,var.roll,var.marks);
	printf("%d - %d -  %d",var.dob.day,var.dob.month,var.dob.year);
}
