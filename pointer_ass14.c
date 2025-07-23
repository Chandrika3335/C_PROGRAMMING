#include<stdio.h>
void fun1(int var)
{
	printf("%x\n",var);
}
void fun2(int *ptr)
{
	printf("%x\n",*ptr);
}
main()
{
	float f=23.4;
	fun1(f);
	fun2(&f);
}
