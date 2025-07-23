#include<stdio.h>
int main()
{
	int result;
	char ch;
	printf("enter a character\n");
	scanf("%c",&ch);
	result = (ch>=65) && (ch<=90);
	result = (((ch>='A') && (ch<='Z')) || ((ch>='a') && (ch<='z')));
}
