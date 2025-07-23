#include<stdio.h>
int main()
{
	double var;
	char *cp=&var;
	printf("%lu %lu\n",cp,cp+1);
}
