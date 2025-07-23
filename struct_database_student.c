#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5
int cnt=0;
typedef struct student
{
	char name[20];
	int roll;
}STU;
void input(STU *ptr)
{
	if(cnt == MAX)
	{
		printf("Database is full\n");
	}
	else
	{
		printf("enter the name\n");
		scanf("%s",ptr[cnt].name);
		printf("enter the roll\n");
		scanf("%d",&ptr[cnt].roll);
	}
}
void print(STU )
{


}
void del(STU)
{

}
void find(STU)
{

}
void quit(STU)
{

}
 
int main()
{
	STU arr[MAX];
	char choice;
	while(1)
	{
		printf("i:input  p:print  d:del   f:find  q:quit");
		printf("enter the choice\n");
                __fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i': input(arr);
				  break;
			case 'p': print(arr);
				  break;
			case 'd': del(arr);
				  break;
			case 'f': find(arr);
				  break;
			case 'q': quit(arr);
				  break;
		}
	}
}

