#include<stdio.h>

struct student
{
	char ch;
	int roll;
	char ch2;
}__attribute__( (packed));
int main()
{
	printf("%lu\n",sizeof(struct student));
}
