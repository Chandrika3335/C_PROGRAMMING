#include<stdio.h>
#include<string.h>
struct person
{
	char name[20];
	int roll;
	struct person *ptr;
};

int main()
{
	struct person v1;

	v1.ptr = NULL;
	strcpy(v1.name,"chandu");
	v1.roll = 28;

	struct person v2;

	v2.ptr = NULL;
	strcpy(v2.name,"vector");
	v2.roll = 30;


	v1.ptr = &v2;

	printf("%s\n",v1.ptr->name);
	printf("%d\n",v1.ptr->roll);
	return 0;
}

