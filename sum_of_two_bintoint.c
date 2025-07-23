#include<stdio.h>
#include<string.h>
#include<math.h>
int checkValidBinary(char *p)
{
	while(*p)
	{
		if(!((*p == '1') || (*p == '0')))
		{
			return 0;
		}
          	++p;
	        return 1;
	}
}
unsigned int btoi(char *ptr)
{
	unsigned int m=1, r=0;
	int i=strlen(ptr)-1;
	while(i>=0)
	{
		if(ptr[i] - 48)
		{
			r += m;
		}
		m *= 2;
		--i;
	}
}
	
int main()
{
	unsigned int n1,n2,sum;
	char str[33];
INPUT1: puts("enter the 1st integer in binary form :");
	fgets(str,33,stdin);
	if(str[strlen(str)-1]==0)
	{
		str[strlen(str)-1]=0;
	}
	if(checkValidBinary(str)==0)
	{
		printf("Error:only 1s and 0s allowed\n");
		goto INPUT1;
	}
	n1=btoi(str);

INPUT2: puts("enter the 2nd integer in binary form\n");
	fgets(str,33,stdin);
	if(str[strlen(str)-1] == 0)
	       str[strlen(str)-1] == 0;
        if(checkValidBinary(str)==0)
	{
               printf("Error:only 1s and 0s allowed\n");
               goto INPUT2;
	}
	n2 = btoi(str);
	sum = n1 + n2;
	printf("%d + %d = %d",n1,n2,sum);
}

