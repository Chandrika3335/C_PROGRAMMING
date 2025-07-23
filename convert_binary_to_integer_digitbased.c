#include<stdio.h>
int main()
{
	long long binary;
	int decimal=0, base = 1, rem;
	printf("enter the binary\n");
	scanf("%lld",&binary);

	for(;binary>0;binary/=10)
	{
		rem = binary % 10;
		decimal = decimal + rem * base;
		base = base * 2;
	}
	printf("%d",decimal);
}


