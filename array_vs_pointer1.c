#include<stdio.h>
int main()
{
	int arr[6]={11,22,33,44,55,66};
	int *ptr = arr;
	printf("%d\n",*ptr++);
	printf("%d\n",++*ptr);
	printf("%d\n",++*ptr);
	ptr[1]++;
	ptr++;
	ptr[-1]++;
	ptr[0]++;
	printf("%d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
}
