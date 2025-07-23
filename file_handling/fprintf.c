#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student
{
	char name[20];
	int age;
	int roll;
}stu={"Chandrika",22,428};

int main()
{
	FILE *fptr;

	fptr = fopen("Student_Details.txt","w");
	
	fprintf(fptr, "Name of the student:%s\n",stu.name);
	fprintf(fptr, "Age : %d\n", stu.age);
	fprintf(fptr, "Roll Number: %d\n", stu.roll);

	printf("Name of the student:%s\n",stu.name);
        printf("Age : %d\n", stu.age);
        printf("Roll Number: %d\n", stu.roll);



	fclose(fptr);

}


