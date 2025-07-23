#include<stdio.h>
int sumOfDigits(int);
int main()
{
	int num,res;
	printf("enter the number\n");
	scanf("%d",&num);
	res = sumOfDigits(num);
	printf("%d",res);
}
int sumOfDigits(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return ((n%10)+sumOfDigits(n/10));
	}

}
