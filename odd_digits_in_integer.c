#include<stdio.h>
int main()
{
    int num,digit;
    printf("enter the number");
    scanf("%d",&num);
    
    while(num)
    {
      digit= num % 10;
      if(digit % 2 != 0)
      {
          printf("%d ",digit);
      }
      num /= 10;
        
    }
}
