#include<stdio.h>
int main()
{
	int num,digit,count=0;
	printf("enter the number\n");
	scanf("%d",&num);
test:digit=num%10;
     printf("%d\n",digit);
     count++;
     num = num / 10;
     if(num>0)
     {
	     goto test;
     }
     printf("count of all digits in a number\n");
     printf("%d\n",count);

     printf("number after digit extraction\n");
     printf("%d",num);
}
