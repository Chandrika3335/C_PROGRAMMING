#include<stdio.h>
void print(char *ptr,int n)
{
	if(n)
		printf(ptr+1,n-1);
	printf("%c",*ptr);
}
int main()
{
	char arr[]={'a','b','c','d','e'};
	print(arr,sizeof(arr));
}
