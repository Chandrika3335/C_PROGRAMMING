#include<stdio.h>
int main()
{
	int i,j,k;
	int n = 1;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
}
