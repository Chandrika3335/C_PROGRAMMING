#include<stdio.h>
int main()
{
	int arr[10];
	int i,j, temp;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0,j=9;i<j;i++,j--)
	{
	        temp = arr[i];
	        arr[i] = arr[j];
	        arr[j] = temp;
	}
        
        printf("After reversing the array is:");
        for(i=0;i<10;i++)
	{
	       printf("%d\t",arr[i]);
	}
        printf("\n");
}

