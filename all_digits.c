#include<stdio.h>
int main()
{
	int num,digit;
	printf("enter the number\n");
	scanf("%d",&num);
test:digit=num % 10;
        printf("%d\n",digit);
	num=num/10;
	if(num>0)
	{
		goto test;
	}
	printf("number after digit extraction\n");
	printf("%d",num);
}

