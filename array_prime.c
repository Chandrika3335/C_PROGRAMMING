#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define N 20 
int rand(void);
int checkprime(int);
int main()
{
	int arr[N];
	int i,count=0;

	srand(getpid());

	for(i=0;i<N;i++)
		arr[i] = rand()%20+5;
        // PRinting the values
	printf("The list:");
	for(i=0;i<N;i++)
		printf("%d\t",arr[i]);
	printf("\n");

	// Count prime numbers
	
	for(i=0;i<N;i++)
	{
		if(checkprime(arr[i]))
			count++;
	printf("%d prime numbers in the array\n",count);
	return 0;
	}

}
int checkprime(int data)
{
	int v;
	for(v=2; v<=data/2; v++)
	{
		if(data%v == 0)
		{

			return 0;
		}

	return 1;
	}
}




