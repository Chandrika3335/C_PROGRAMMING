#include<stdio.h>
int sumOfDigits(int);
int main()
{
        int min=1,max=9999,num;
        int result;
        for(num = min; num<=max; num++)
        {
                result = sumOfDigits(num);
                if(result == 9)
                {
                        printf("%d\t",num);
                }
        }
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

