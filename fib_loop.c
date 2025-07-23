#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,n=3;
	printf("Fibonacci series = %d %d\t",n1,n2);
	while(n<=10)
	{
		n3 = n1 + n2;
	        printf("%d\t",n3);	 
	        n1=n2;
	        n2=n3;
	        n++;
	}
}


