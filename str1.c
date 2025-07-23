#include<stdio.h>
#include<string.h>
int main()
{
	char str[15]="   ab   c ";
	char *ptr=str;
	while(*ptr == 32)
	{
		memmove(str,str+1,strlen(str+1)+1);
	}
	printf("str:%s\n",str);
}
