#include<stdio.h>
int main()
{
	int arr[10], i, j;
	int min, max;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	min = max = arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
		if(arr[i] > max)
		{
			max = arr[i];
		}
	
	}
	printf("Minimum Element = %d\n",min);
	printf("Maximum Element = %d\n",max);

}

