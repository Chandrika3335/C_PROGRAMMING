#include<stdio.h>
int main()
{
        int num,digit,lowest=9;
        printf("enter the number\n");
        scanf("%d",&num);
        while(num>0)
        {
              digit = num % 10;
              if(digit < lowest)
              {
                      lowest = digit;
              }
              num = num / 10;
        }
        printf("Lowest digit of an integer = %d\n",lowest);
}

