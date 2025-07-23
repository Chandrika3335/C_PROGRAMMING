#include<stdio.h>
int main()
{
	int num=121,temp,rev=0,digit;
	temp = num;
	while(num>0)
	{
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}
	if(rev == temp)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
