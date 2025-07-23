#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	int count = 0;
        while(num)
	{
		count += num & 1;;
		num = num >> 1;
	}
	printf("%d",count);
	return 0;
}

