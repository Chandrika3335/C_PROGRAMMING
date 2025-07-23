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
	strcpy(s1.name,"vector");
	printf("name=%s\n",s1.name);
	printf("roll=%d\n",s1.roll);
	/*direct assignment
	s2 = s1;*/

	/*member by member assignment
	s2.roll = s1.roll;
	strcpy(s2.name, s1.name);*/

	/*memmove
	memmove(&s2,&s1,sizeof(s1));*/

	//memcpy
	memcpy(&s2,&s1,sizeof(s1));

	printf("name=%s\n",s2.name);
	printf("roll=%d\n",s2.roll);
}
