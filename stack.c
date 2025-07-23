#include<stdio.h>
int g = 10;
void f2(int v2)
{
	static int s2=22;
	printf("in f2...v2=%d at %lu\n",v2,&v2);
	printf("in f2...s2=%d at %lu\n",s2,&s2);
	return;
}
void f1(int v1)
{
	printf("in f1...v1=%d at %lu\n",v1,&v1);
	f2(v1+g);
	return;
}
int main()
{
	int v0=100;
	static int s0=1000;
	printf("main: v0=%d at %lu\n",v0,&v0);
        printf("main: s0=%d at %lu\n",s0,&s0);
        printf("main........at %lu\n",main);
        printf("f1........at %lu\n",f1);
        printf("f2........at %lu\n",f2);
	f1(v0+s0);
	return 0;
}

