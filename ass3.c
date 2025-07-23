#include<stdio.h>
int main()
{
	short int x = 55, y = 66;
	printf("x=%d y=%d\n",x,y);
	printf("enter two integers:");
	scanf("%hd%hd", &x,&y);
	printf("x = %d y =%d\n",x,y);
}
