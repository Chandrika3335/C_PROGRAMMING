#include<stdio.h>
int main()
{
        int num,digit,highest=0;
        printf("enter the number\n");
        scanf("%d",&num);
        while(num>0)
        {
              digit = num % 10;
              if(digit > highest)
              {
                      highest = digit;
              }
              num = num / 10;
        }
        printf("Highest digit of an integer = %d\n",highest);
}

