#include<stdio.h>
int main()
{
	int i,j,A;
	int n=3;
	for(i=0;i<4;i++)
	{
		for(j=-n;j<=n;j++)
		{
			if(j<0)
			{
				A=-j;
			}
			else
			{
				A=j;
			}
			if(A<i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

