#include<stdio.h>
/*int main()
{
	int num, i = 0, j = 1, k;
	printf("enter the number\n");
	scanf("%d",&num);

	printf("Fibonacci series upto %d:\n",num);

	if(i <= num)
		printf("%d ",i);

	while(j <= num)
	{
		printf("%d ",j);
		k = i + j;
		i = j;
		j = k;
	}
	return 0;
}*/

//First n fibonacci numbers
/*#include <stdio.h>
int main() {
    int n;
    int a = 0, b = 1, c;

    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers:\n", n);

    if (n >= 1)
	    printf("%d ", a); 

    if (n >= 2) 
	    printf("%d ", b);

    for (int i = 3; i <= n; i++) 
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}*/


//Sum of First n fibonacci numbers
#include <stdio.h>

int main() 
{
    int n;
    int a = 0, b = 1, c, sum = 0;

    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    
    if(n <= 0) 
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;
    }

    printf("First %d Fibonacci numbers:\n", n);

    for(int i = 1; i <= n; i++) 
    {
        printf("%d ", a);
        sum += a;
        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum = %d\n", sum);

    return 0;
}

