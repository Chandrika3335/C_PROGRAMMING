#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]="   ab   c ";
	char *ptr=str;
	while(str[strlen(str)-1]==32)
	{
		str[strlen(str)-1]=0;
	}
	printf("str:%s\n",str);
}
