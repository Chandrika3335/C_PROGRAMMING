#include<stdio.h>
void f1(int x)
{
	printf("f1...x=%d\n",x);
	x = x+10;
	printf("f1...x=%d\n",x);
	return;
}
int main()
{
	int var=100;
	printf("in main...var=%d\n",var);
	f1(var);
	printf("in main...var = %d\n",var);
	f1(++var);
        printf("in main...var = %d\n",var);
	f1(var++);
	printf("in main...var =%d\n",var);
	f1(var+100);
	printf("in main...var = %d\n",var);
	return 0;
}

