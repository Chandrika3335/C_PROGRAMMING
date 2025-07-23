#include<stdio.h>
int main()
{
	int a,b, n=5;
	for(a=n; a>=1; a--)
	{
	     for(b=a; b>=1; b--)
	     {
	           printf("%2c",64+b);
	     }
             printf("\n");
	}
}	
