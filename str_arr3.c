#include<stdio.h>
int main()
{
	int x=20;
	static int y=30;
	int z=0;
	z=x+y;
	x=y*250;
	y=z-3567;
	printf("%d %d %d\n",x,y,z);
}
