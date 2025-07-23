#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]="              ";
	char *temp;
	temp = str+strlen(str)-1;
	while(temp>=str && *temp == 32)
		*temp-- = 0;
	printf("Str:%s",str);
}
