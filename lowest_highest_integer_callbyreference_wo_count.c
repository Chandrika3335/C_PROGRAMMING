#include<stdio.h>
void findMinMax(unsigned long long int,int*,int*);
int main()
{
	int minDigit,maxDigit;
	unsigned long long int data;
	printf("Enter int data:");
	scanf("%llu",&data);

	findMinMax(data,&minDigit,&maxDigit);
	printf("lowest digit=%d\n",minDigit);
        printf("Highest digit=%d\n",maxDigit);
        return 0;
}
void findMinMax(unsigned long long int var,int *pMin,int *pMax)
{
	unsigned long long int temp=var;
	int curDigit;
int minDigit=10,maxDigit=-1;
do{
	curDigit=temp%10;

	if(curDigit < minDigit)
	   minDigit=curDigit;	
	if(curDigit > maxDigit)
	   maxDigit=curDigit;	

	temp/=10;
	}while(temp);	
//found lowestdigit and its frequency, and highest and its count.

	*pMin=minDigit;
	*pMax=maxDigit;

	return ;
}

