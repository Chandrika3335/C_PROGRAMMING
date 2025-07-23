#include<stdio.h>
int x=10;
void inc(void)
{
	++x;
}
int main()
{
	printf(“x=%d\n”,x);
        inc();
        inc();
        inc();
        printf(“x=%d\n”,x);
}
