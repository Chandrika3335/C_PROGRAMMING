#include<stdio.h>
struct DOB
{
	int day:5;
	int month:5;
	int year;
}var={18,11,2002};
int main()
{
	/*printf("enter the day\n");
	scanf("%d",&var.day);
	printf("enter the month\n");
	scanf("%d",&var.month);
	printf("enter the year\n");
	scanf("%d",&var.year);*/

	printf("%d\n",var.day);
}

