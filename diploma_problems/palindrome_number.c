#include<stdio.h>
int main()
{
	int num;
	int digit, rev=0, temp;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp = num;
	while(num != 0)
	{
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}
	if(temp == rev)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not palindrome\n");
	}
	return 0;
}
