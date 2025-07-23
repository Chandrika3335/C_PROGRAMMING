#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30];
	char s2[30];
	puts("enter 1st string:");
	gets(s1);
	puts("enter 2nd string:");
	gets(s2);
	char *temp;
	int cnt=0;
	temp=1;
	int len2=strlen(s2);
	while(temp==strstr(temp,s2))
	{
		cnt++;
		temp+=len2;
	}
	printf("count = %d",cnt);
}

