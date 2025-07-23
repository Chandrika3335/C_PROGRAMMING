#include<stdio.h>
void findRepeatedElements(int arr[],int n)
{
	int found = 0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(arr[i] == arr[j])
			{
				printf("%d",arr[i]);
				found = 1;
				break;
			}
        if(!found)
	{
		printf("No repeated found\n");
	}
}

int main()
{
	int n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter th eelements of the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	findRepeatedElements(arr,n);
	return 0;
}

