#include<stdio.h>
int main()
{
	int i,j,A,n=3;
	for(i=1;i<=4;i++)
	{
		for(j=-n;j<=n;j++)
		{
			if(j<0)
			{
				j= -n;
			}
			else
			{
				j=n;
			}
			if(A<i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
			printf("\n");
		}

	}
}

