#include<stdio.h>

int main()
{
	int arr[20], n , i, j,temp;

	printf("enter the no of elements\n");
	scanf("%d", &n);

	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("Elements after sorting the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d", arr[i]);
	}
}

