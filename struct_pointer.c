//Call by reference
#include<stdio.h>
struct student

	char name[20];
	int roll;
};
void Input(struct student *ptr)
{
	printf("enter the name\n");
	scanf("%s",ptr->name);
	printf("enter the roll\n");
	scanf("%d",&ptr->roll);
}
int main()
{
	struct student S;
	Input(&S);
	printf("%s\n",S.name);
	printf("%d\n",S.roll);
}
	
