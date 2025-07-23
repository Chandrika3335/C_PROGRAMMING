#include<stdio.h>
int main()
{
	int arr[3][4] = {{11,22},{33,44,55,66},{77,88,99}};
	int **p = arr;
	int *q= arr[0];
	int r=arr[0][0];
	printf("%d",**p);
}
