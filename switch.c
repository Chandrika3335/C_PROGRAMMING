#include<stdio.h>
int main()
{
	int a = 5,b = 2;
	char choice;
	printf("enter the choice\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case '+':printf("%d\n",a+b);
			 break;
		case '-':printf("%d\n",a-b);
			 break;
		case '*':printf("%d\n",a*b);
			 break;
		case '/':printf("%d\n",a/b);
			 break;
		case '%':printf("%d\n",a%b);
			 break;
		default:printf("invalid");
	}
}

