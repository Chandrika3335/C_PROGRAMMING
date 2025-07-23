#include<stdio.h>
int main()
{
	char *q[10];
	printf("%d %d %d\n",sizeof(q),sizeof(*q),sizeof(**q));
	
	char (*p)[10];
	printf("%d %d %d\n",sizeof(p),sizeof(*p),sizeof(**p));

	char **r[10];
	printf("%d %d %d\n",sizeof(r),sizeof(*r),sizeof(**r));


}

