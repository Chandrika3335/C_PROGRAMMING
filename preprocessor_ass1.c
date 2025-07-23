#include<stdio.h>
#define calc(a, b) (a * b) / (a - b)
void main()
{
   int a = 45, b = 10;
   printf("%d", calc(a + 4, b -2));
}

