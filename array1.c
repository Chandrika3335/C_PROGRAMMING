#include<stdio.h>
int main()
{
	int arr[3][3]={10,20,30,40,50,60,70,80,90};
	printf("%u\n",arr);
	printf("%u\n",&arr+1);
	printf("%u\n",(&arr+1)[-1]);
	printf("%u\n",(&arr+1)[2]);
}
