#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);

	int bit;
	printf("enter the bit position\n");
	scanf("%d",&bit);

	int res;
	res = (num | (1 << bit));
        printf("%d\n",res);
}	

