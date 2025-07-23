#include<stdio.h>
int main()
{
	int n1=5,n2=2,res,choice;
	printf("enter the choice\n");
	scanf("%d",&choice);
	while(choice != 6)
	{
		switch(choice)
		{
			case 1:
				res = n1 + n2;
				printf("%d\n",res);
				break;
			case 2:
				res = n1 - n2;
				printf("%d\n",res);
				break;
			case 3:
				res = n1 * n2;
				printf("%d\n",res);
			        break;
			case 4:
				res = n1 / n2;
				printf("%d\n",res);
				break;
			case 5:
				res = n1 % n2;
				printf("%d\n",res);
			case 6:
				printf("Quit from the program");
			default:
				printf("invalid");
		}
	}
}

