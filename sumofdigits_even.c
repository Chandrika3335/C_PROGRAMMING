#include<stdio.h>
int main()
{
	int num, digit, even_sum =0,odd_sum = 0;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		digit = num % 10;
	       	if(digit % 2 ==0)
		{
			even_sum += digit;
		}
	        else
		{
	                odd_sum += digit;

	        }
	        num = num / 10;
	}
	        printf("sum of even digits is %d\n",even_sum);
	        printf("sum of odd digits is %d\n",odd_sum);
		return 0;
}

