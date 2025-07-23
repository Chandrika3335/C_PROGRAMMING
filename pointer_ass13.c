#include<stdio.h>
int main()
{
	unsigned int var=0x11223344;
	char *ptr=&var;
	printf("%x\n",*ptr++);
	printf("%x\n",++*ptr);
	printf("%x\n",*++ptr);
	printf("%x\n",--*ptr);
	printf("%x\n",*ptr--);
	printf("%x\n",var);
}
