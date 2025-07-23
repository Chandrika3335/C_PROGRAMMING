#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
int movezeroestoend(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			arr[count++] = arr[i];
		}
	}
}

int main()
{
	int arr[MAX_SIZE];
	int n=0;
	for(i=0;i<MAX_SIZE;i++)
	{
		printf("enter the array\n");
		scanf("%d",&arr[i]);
	}

	while(1)
	{
		if(n>=MAX_SIZE)
		{
			printf("Memory overflow\n");
			return 0;
		}
		if(scanf("%d",&arr[n]!=1))
		{
			break;
		}
		n++;
	}
	if(n>MAX_SIZE)
	{
		printf("Invalid size\n");
		return 0;
	}
	movezeroestoend(arr,n);
	for(int j=0;j<n;j++)
	{
		printf("%d\n",arr[j]);
	}
	printf("\n");
}


