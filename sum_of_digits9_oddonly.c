#include<stdio.h>
int CheckDigitsforOdd(int);
int sumOfDigits(int);
int main()
{
        int min=1,max=9999,num;
        int result;
        for(num = min; num<=max; num++)
        {
                result = CheckDigitsforOdd(num);
		if((sumOfDigits(num)) == 9 && result == 1)
		{
			printf("%d\t",num);
		}
	}
	return 0;
}
int CheckDigitsforOdd(int var)
{
	while(var)
	{
		if((var%10)%2 == 0)
		{
			return 0;
		}
		var /= 10;
	}
	return 1;
}
int sumOfDigits(int x)
{
        int sum=0;
        while(x)
        {
                sum = sum + (x%10);
                x /= 10;
        }
        return sum;
}

