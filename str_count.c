#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	char *p,*q;
	puts("enter a string:");
	fgets(str,30,stdin);
	printf("Str:%s\n",str);
	for(p=str; *p; p++)
	{
		q=p+1;
		while(q=strchr(q,*p))
			memmove(q,q+1,strlen(q+1)+1);
	}
	printf("Str:%s\n",str);
}
		
