#include<stdio.h>
int main()
{
	char *p;
	float *q;
	double *r;
	printf("%lu %lu %lu\n",sizeof(p),sizeof(q),sizeof(r));
	printf("%lu %lu %lu\n",sizeof(*p),sizeof(*q),sizeof(*r));
}
