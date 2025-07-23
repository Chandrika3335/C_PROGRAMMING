#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]="INSTITUTE";
	char ch='T';
	char *ptr;
	ptr = strrchr(str,ch);
	if(ptr == NULL) 
		printf("Not found");
	else
		printf("found at %d\n",ptr-str);
}
