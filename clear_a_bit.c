#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	int position;
	printf("enter the position");
	scanf("%d",&position);
	int res;
	res = (num & (~(1 << position)));
	printf("%d",res);
}
