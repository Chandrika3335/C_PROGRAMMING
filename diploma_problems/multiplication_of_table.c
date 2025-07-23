#include<stdio.h>
int main()
{
	int a,b, i=1;
	printf("enter a value\n");
	scanf("%d", &a);
	while(i <= 10)
	{
		b = a * i;
		printf("%d*%d=%d\n", a, i, b);
		i++;
	}
	return 0;
}

