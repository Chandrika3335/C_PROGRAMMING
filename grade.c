#include<stdio.h>
int main()
{
	int mark1,mark2,mark3;
	int total;
	float per;
	printf("enter the marks\n");
	scanf("%d%d%d",&mark1,&mark2,&mark3);
	total = mark1 + mark2 + mark3;
	per = ((total / 300.0) * 100);
	printf("%0.2f\n",per);
}
