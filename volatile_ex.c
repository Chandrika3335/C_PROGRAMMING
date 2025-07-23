#include<stdio.h>
void f3(int x, int y, int z)
{
	printf("f3: x=%d y=%d z=%d\n",x,y,z);
}
int b=1;
int main()
{
	volatile int a=10, b=50, c=70;
	printf("main:a=%d b=%d c=%d\n",a,b,c);
	f3(a<<1, a=b, a>>1);
	printf("main:a=%d b=%d c=%d\n",a,b,c);
	f3(a=b, a=0, a=c);
	printf("main:a=%d b=%d c=%d\n",a,b,c);

        return 0;
}

