#include<stdio.h>
int main()
{
	char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
	char *cp;
	int *ip;
	cp=ip=arr;
	printf("%x %x\n",*cp,*ip);
	cp++;
	ip++;
	printf("%x %x\n",*cp,*ip);
}
