#include<stdio.h>
int main()
{
	int i,j,n=5;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2d",((i+j)%2==0));
		}
		printf("\n");
	}
}

