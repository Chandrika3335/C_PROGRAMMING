#include<stdio.h>
void findMinMax(unsigned long long int,int*,int*,int*,int*);
int main()
{
	int minDigit,minDigitCnt,maxDigit,maxDigitCnt;
	unsigned long long int data;
	printf("Enter int data:");
	scanf("%llu",&data);

	findMinMax(data,&minDigit,&minDigitCnt,&maxDigit,&maxDigitCnt);
	printf("lowest digit=%d found %d times\n",minDigit,minDigitCnt);
printf("Highest digit=%d present %d times\n",maxDigit,maxDigitCnt);
return 0;
}
void findMinMax(unsigned long long int var,int *pMin,int*pMinCnt,int *pMax, int *pMaxCnt)
{
	unsigned long long int temp=var;
	int curDigit;
int minDigit=10,minDigitCnt=0,maxDigit=-1,maxDigitCnt=0;
do{
	curDigit=temp%10;

	if(curDigit < minDigit)
	   minDigit=curDigit;	
	if(curDigit > maxDigit)
	   maxDigit=curDigit;	

	temp/=10;
	}while(temp);	

temp=var;
do{
	if(temp%10 == minDigit)
		minDigitCnt++;
	if(temp%10 == maxDigit)
		maxDigitCnt++;
	

	temp/=10;
}while(temp);
//found lowestdigit and its frequency, and highest and its count.

	(*pMin)=minDigit;
	(*pMinCnt)=minDigitCnt;
	*pMax=maxDigit;
	*pMaxCnt=maxDigitCnt;

	return ;
}

