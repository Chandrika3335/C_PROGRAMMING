#include<stdio.h>
int main()
{
	int num,count= 0;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		if(num & 1)
		{
			count++;
		}
		num >>=1;

	}
	printf("number of set bits is %d",count);
	return 0;
}
