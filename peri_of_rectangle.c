#include<stdio.h>
int main()
{
	int l , b;
	float peri;
	printf("enter the length and breadth of a rectangle\n");
	scanf("%d%d",&l,&b);
	peri = 2*(l+b);
	printf("Perimeter of a rectangle is: %0.2f",peri);
}


