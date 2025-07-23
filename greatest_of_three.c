#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	((a>b)?((a>c)?printf("a is biggest"):printf("c is biggest")):((b>c)?printf("b is biggest"):printf("c is biggest")));
 }
