#include<stdio.h>
#include<string.h>
int main()
{
	int n1=65535;
	int temp;
	char str[10];
	int i=0;
	for(temp = n1; temp!=0; temp/=10)
	{
		str[i++] = temp % 10 + 48;
	str[i]='\0';
	strrev(str);
	printf("%s",str);
}
