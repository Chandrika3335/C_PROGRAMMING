#include<stdio.h>
int main()
{
	char ch=50;
	char *ptr=&ch;
	printf("%c\n",--*ptr);
	printf("%c\n",ch);
}
