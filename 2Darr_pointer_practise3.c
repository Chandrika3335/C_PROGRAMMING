#include<stdio.h>
int main()
{
	int arr[3][4]={{11,22},{33,44,55,66},{77,88,99}};
	int (*p)[3];
	int (*q)[4];
	int (*r)[5];

	p=q=r=arr;

	printf("%lu %lu %lu %lu\n",arr,p,q,r);
	printf("%lu %lu %lu %lu\n",arr+1,p+1,q+1,r+1);
	printf("%d %d %d %d\n",**arr,**p,**q,**r);
	printf("%d %d %d %d",arr[1][3],p[1][3],q[1][3],r[1][3]);
}
