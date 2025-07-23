#include<stdio.h>
int main()
{
        int num,digit,count=0,sum=0;
        printf("enter the number\n");
        scanf("%d",&num);
        while(num>0)
        {
              digit = num % 10;
              if(digit %2 == 0)
              {
                       sum = sum + digit;
              }
	      count = count + 1;
              num = num / 10;
        }
	printf("count of all digits = %d\n",count);
        printf("Sum of all even digits = %d\n",sum);
}

