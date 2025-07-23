#include<stdio.h>
#include<string.h>
int main()
{
	char temp[40];
	int mid;
	char s1[40],s2[10];
	puts("enter string1:");
	fgets(s1,40,stdin);
	puts("enter string2:");
	fgets(s2,10,stdin);
	mid = strlen(s1)/2;
	strcpy(temp,s1+mid);
	strcpy(s1+mid,s2);
	strcpy(s1+strlen(s1), temp);
	printf("Str:%s",s1);

}

