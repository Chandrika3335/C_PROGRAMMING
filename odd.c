#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num%2!=0)
	{
		num-=1;
		printf("%d",num);
	}
}
