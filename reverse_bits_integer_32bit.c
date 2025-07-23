#include<stdio.h>
int main()
{
	unsigned int num;
	printf("enter the number\n");
	scanf("%u",&num);
	int left =31,right= 0;
	while(left>right)
	{
		int left_bit = (num >> left) & 1;
	        int right_bit =	(num >> right) & 1;
		if(left_bit != right_bit)
		{
			num = num ^ (1<<left);
			num = num ^ (1<<right);
		}


			left--;
			right++;

	}
	printf("Reversed number:%u",num);
	printf("In binary format:\n");
	for(int i=31;i>=0;i--)
	{
		printf("%d",(num>>i)&1);
	}

	return 0;

}
