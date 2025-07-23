/*#include<stdio.h>
int main()
{
	int num, sum = 0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		sum = sum + i;
	}
	printf("Sum of n natural numbers is %d\n",sum);
	return 0;
}*/

//Sum of First n even numbers
/*#include<stdio.h>
int main()
{
        int num, sum = 0;
        printf("enter the number\n");
        scanf("%d",&num);
        for(int i=1;i<=num;i++)
        {
                sum = sum + 2 * i;
        }
        printf("Sum of n natural numbers is %d\n",sum);
        return 0;
}*/


//Sum of first n odd numbers
#include<stdio.h>
int main()
{
        int num, sum = 0;
        printf("enter the number\n");
        scanf("%d",&num);
        for(int i=1;i<=num;i++)
        {
                sum += 2 * i - 1;
        }
        printf("Sum of n natural numbers is %d\n",sum);
        return 0;
}
