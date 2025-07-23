#include<stdio.h>
int swappingoftwo(*a,*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int n1,n2;
	printf("enter the n1 and n2 values\n");
	scanf("%d%d",&n1,&n2);
	printf("Before swapping: n1 = %d, n2 = %d\n",n1,n2);
	swappingoftwo(*n1,*n2);
	printf("After swapping: n1 = %d, n2 = %d",n1,n2);
}



