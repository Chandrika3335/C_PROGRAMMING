#include<stdio.h>
int countDigits(int num)
{
	int count = 0;
	if(num == 0)
	{
		return 1;
	}
	while(num!=0)
	{
		num = num / 10;
		count++;
	}
	return count;
}
int main()
{
	int min,max;
	int a,b;
	int width;
	printf("enter range");
	printf("enter min:\n");
	scanf("%d",&min);
	printf("enter max:\n");
	scanf("%d",&max);
	for(a=min; a<=max; a++)
	{
		for(b=1;b<=10;b++)
		{
			int product = a * b;
			int width = countDigits(product) + 3;
			printf("%*d",width,product);
		}
		printf("\n");
	}
	return 0;
}


