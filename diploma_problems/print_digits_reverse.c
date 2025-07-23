/*#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		int digit = num  % 10;
		printf("%d",digit);
		num = num /10;
	}
	return 0;
}*/


#include<stdio.h>
int main()
{
        int num;
	int digit, rev=0;
        printf("enter the number\n");
        scanf("%d",&num);
        while(num>0)
        {
                digit = num  % 10;
                rev = rev * 10 + digit;
                num = num / 10;
        }
	printf("Reverse = %d\n", rev);

        return 0;
}
