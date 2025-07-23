#include<stdio.h>
#include<string.h>
int check_input(char *str)
{
	if(*str=='-')
		str++;
	while(*str)
	{
		if(*str=='.')
			str++;
		if(!(*str>='0' && *str<='9'))
			return 1;
		str++;
	}
	return 0;
}
double myatof(char *str)
{
	int flag=0,sign=1;
	double num=0.0,fractional=0.0,divisor=10.0;
	while(*str)
	{
		if(*str=='-')
		{
			sign=-1;
			str++;
		}
		if(*str=='.')
		{
			flag=1;
			str++;
		}
		if(flag==0)
		{
			num=num*10+(*str-'0');
			str++;
		}
		else
		{
			fractional=fractional+( (*str-'0')/divisor );
			divisor=divisor*10;
			str++;
		}
	}
	return sign*(num+fractional);
}

int main()
{
	char strone[20],strtwo[20];
	while(1)
	{
		printf("Enter str1:");
		fgets(strone,20,stdin);
		if(strone[strlen(strone)-1]=='\n')
			strone[strlen(strone)-1]='\0';
		if(check_input(strone))
		{
			printf("Invalid input(str one)...Try again\n");
		}
		else
			break;
	}
	while(1)
	{
		printf("Enter str2:");
		fgets(strtwo,20,stdin);
		if(strtwo[strlen(strtwo)-1]=='\n')
			strtwo[strlen(strtwo)-1]='\0';
		if(check_input(strtwo))
		{
			printf("Invalid input(str two)...Try again\n");
		}else
			break;
	}
	double num1,num2;
	num1=myatof(strone);
	num2=myatof(strtwo);
	printf("%f",num1+num2);
}


