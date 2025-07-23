#include<stdio.h>
int main()
{
	int var = 0x12345678;
	char *ptr=&var;
	printf("%x\n",*ptr);
	ptr++;
	printf("%x\n",*(short int*)ptr);
}
