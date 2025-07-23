#include<stdio.h>
int main()
{
	int num,set = 0,clear = 0;
	printf("enter the number:");
	scanf("%d",&num);

	for(int i=0;i<32;i++)
	{
		if(num&(1<<i))
		{
			set++;
		}
		else
		{
			clear++;
		}
	}
	printf("%d\n",set);
	printf("%d\n",clear);
}
