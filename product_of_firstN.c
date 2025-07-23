#include<stdio.h>
int main()
{
        int product=1;
        int N=5;
        int i=1;
        while(i<=N)
        {
                product = product * i;
                i++;
        }
        printf("Product of first N natural = %d",product);
}

