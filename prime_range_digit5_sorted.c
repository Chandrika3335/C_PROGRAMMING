#include<stdio.h>
int checkPrime(int);
int checkDigit(int,int);
int checkSorted(int,int,int);
int main()
{
	int min, max, digit, num;
	printf("Enter min range\n");
	scanf("%d",&min);
	printf("Enter the max range\n");
	scanf("%d",&max);
	printf("enter the digit what you want to present in prime number\n");
	scanf("%d",&digit);
	for(num=min; num<=max; num++)
	{
		if((checkPrime(num)==1) && (checkDigit(num, digit)==1))
			if(checkSorted(num) == 0)
				printf("%d\t",num);
	}
	return 0;
}
int checkDigit(int var,int d)
{
	while(var)
	{
		if((var%10) == d)
		{
			break;
		}
		var/=10;
	}
	if(var==0)
		return 0;
	else
		return 1;
}
int checkPrime(int num)
{
	int v;
	for(v = 2; v<=num/2; v++)
	{
		if((num%v)==0)
			return 0;
	}
	return 1;
}
int checkSorted(int a,int cur,int prev)
{
	while(a)
	{

                cur = a % 10;
                if(cur > prev)
                        prev = cur;
		else
			break;
		a/=10;

        }
}

