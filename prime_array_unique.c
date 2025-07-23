#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define N 50 
void print(int*,int);
void input(int*,int,int,int);
void locatePrime(int*,int);
int main()
{
	int arr[N],min,max;
	printf("Enter range\nEnter min:");
	scanf("%d",&min);
	printf("Enter max:");scanf("%d",&max);
	input(arr,N,min,max);
	print(arr,N);
	locatePrime(arr,N);
	return 0;
}
int isPrime(int data)
{
	int  v;
	for(v=2;v<=data/2;v++)
		if(data%v== 0) 
			return 0;
return 1;
}
void locatePrime(int *p,int n)
{
	int i,cnt=0;
	printf("prime numbers at:");
	for(i=0;i<n;i++)
	{
	   if(isPrime(p[i]))
	   {
		++cnt;
		printf("%d,",i);
	   }			
	}
printf("\ntotal:%d prime numbers\n",cnt);
}
void print(int *p,int n)
{
	int i;
	printf("The array:");
	for(i=0;i<n;i++)
		printf("%d,",p[i]);
printf("\n");
}
int checkRepeat(int *p,int i)
{

	int j;
	for(j=i-1;j>=0;j--)
		if(p[j]==p[i])
			return 1;
return 0;
}

void input(int *ptr,int n, int min, int max)
{
	int i,range;
	srand(getpid());
	range=(max-min)+1;
	for(i=0;i<n;i++)
	{
		ptr[i]=rand()%range+min;
		if(checkRepeat(ptr,i)==1)
			 --i;
	}
	return;
}


