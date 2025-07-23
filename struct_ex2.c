#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int roll;
};
int main()
{
	struct student s1,s2;
	s1.roll = 28;
		
	s2.roll = s1.roll;
	strcpy(s1.name,"vector");
	strcpy(s2.name,s1.name);

	if((s1.roll == s2.roll) && (strcmp(s1.name,s2.name)==0))
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	
	}
}               
