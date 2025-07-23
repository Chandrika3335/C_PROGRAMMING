#include<stdio.h>
void f3(int x, int y , int z)
{
	printf("f3:x=%d y=%d z=%d\n",x,y,z);
}
int main()
{
        volatile int a = 10,b=50,c=70;
	f3(++a, ++a, ++a);
	f3(++b, ++b, ++b);
	printf("main:a=%d b=%d c=%d\n",a,b,c);
	return 0;
}
