#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if((num%7)==0 && (num%9)==0)
	{
		printf("Divisible by either 9 and 7");
	}
}
