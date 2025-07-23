#include<stdio.h>
struct St
{
	char a;
	int b;
	char c;
	float e;
	char d;
};
 int main()
{
	printf("%ld\n",sizeof(struct St));
}

