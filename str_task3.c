#include<stdio.h>
int main()
{
	int arr[]={11,22,33,44};
	int *p;
	const int *q;
	int *const r=arr;
	const int *const s=arr;
	p=q=arr;
	++*p;
	//++*q;
	++*r;
	//++*s;
	printf("%d %d %d %d\n",arr[0],arr[1],arr[2],arr[3]);
	printf("%d %d %d %d\n",p[2],q[2],r[2],s[2]);

}

	                               

