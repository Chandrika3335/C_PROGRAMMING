#include<stdio.h>
int main()
{
	int sum=0;
	int N =10;
	int i=1;
	while(i<N)
	{
		sum = sum + i;
		i++;
	}
	printf("Sum of first N natural = %d",sum);
}
