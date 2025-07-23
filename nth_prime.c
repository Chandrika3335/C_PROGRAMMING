#include<stdio.h>
int isprime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i =2;i<=n/2; i++)
    {
        if(n%i==0)
        {
            return 0;
        }

    }
    return 1;
}
int main()
{
    int n,count = 0,num=2;
    printf("enter the n value");
    scanf("%d",&n);
    while(1)
    {
        if(isprime(num))
        {
            count++;
        }
        if(count == n)
        {
            printf("%dth prime number is %d",n,num);
            break;
        }
        num++;
    }
    return 0;
}
        
