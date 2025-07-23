
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character\n");
	scanf("%c",&ch);
	((ch>=65 && ch<=90)? printf("%c\n",ch+=32) : ((ch>=97 && ch<=122)? printf("%c\n",ch-=32) : printf("invalid")));
	 
} 
