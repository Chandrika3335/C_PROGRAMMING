/*#include<stdio.h>
int is_palindrome(int num)
{
	int rev=0, digit, temp=num;

	while(num != 0)
	{
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}
	return (temp == rev);
}
int main()
{
	int num1, num2;
	printf("enter the number1\n");
	scanf("%d",&num1);

	printf("enter the number2\n");
	scanf("%d",&num2);

	for(int i = num1; i <= num2; i++)
	{
		if(is_palindrome(i))
		{
			printf("%d\n",i);
		}
	}
	printf("\n");
	return 0;
}*/



//Count no of plaindromes
#include<stdio.h>
int is_palindrome(int num)
{
        int rev=0, digit, temp=num;

        while(num != 0)
        {
                digit = num % 10;
                rev = rev * 10 + digit;
                num = num / 10;
        }
        return (temp == rev);
}
int main()
{
        int num1, num2;
	int count = 0;
        printf("enter the number1\n");
        scanf("%d",&num1);

        printf("enter the number2\n");
        scanf("%d",&num2);

        for(int i = num1; i <= num2; i++)
        {
                if(is_palindrome(i))
                {
                       count++;
                }
        }
        printf("%d\n",count);
        return 0;
}
