#include<stdio.h>
int main()
{
	unsigned long int arr[3][4] = {{11,22},{33,44,55,66},{77,88,99}};
	printf("%lu\n",arr);
	printf("%lu %lu %lu\n",arr[0],*arr,*(arr+1));
	printf("%lu %lu %lu\n",*arr[0],*arr+1,*arr[1]);
	printf("%lu %lu %lu\n",arr+1,*arr+1,**arr+1);
	printf("%lu %lu %lu\n",arr[0][6],arr[2][-2],arr[4][-6]);
        return 0;
}
