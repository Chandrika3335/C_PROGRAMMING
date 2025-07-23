#include<stdio.h>
int i;
static void inc(void)
{
    i++;
}
int main()
{
    inc();
    inc();
    printf(“%d”, i);
}
void inc(void)
{
	int i;
	++i;
}

