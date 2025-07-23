#include<stdio.h>
int main()
{
	int choice;
	printf("enter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("addition");
		       break;
		case 2:printf("subtraction");
		       break;
		case 3:printf("multiplication");
		       break;
		default:printf("invalid");
	}
}

      
