#include<stdio.h>
int main()
{
	char *cp=0;
	double *dp=0;
	printf("%lu %lu\n",cp,dp);
	++cp,++dp;
	printf("%lu %lu\n",cp,dp);
	++cp,++dp;
	printf("%lu %lu\n",cp,dp);
}
