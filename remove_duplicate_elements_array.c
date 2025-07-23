#include<stdio.h>
int remove_duplicate(int arr[], int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}

	int i, j=0;
	for(i=1;i<n;i++)
	{
		int found = 0;
                for(k=0; k<=j; k++)
		{
			if(arr[i] == arr[j])
			{
				found = 1;
				break;
			}
		}
	        




		
int main()
{
	int arr[20], n;
	printf("enter the no of elements\n");
	scanf("%d",&n);

	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	n = remove_duplicate(arr,n);

	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}


