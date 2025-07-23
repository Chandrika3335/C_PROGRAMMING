#include<stdio.h>
int main()
{
	int num=7,bit=1;
	char choice;
	printf("enter the choice\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'S':printf("%d\n",num=(num | (1<<bit)));
			 break;
		case 'C':printf("%d\n",num=(num & (~(1<<bit))));
			 break;
		case 'T':printf("%d\n",num=(num ^ (1<<bit)));
			 break;
		default:
			 printf("invalid");
	}
}

