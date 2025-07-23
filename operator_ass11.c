
#include<stdio.h>
int main()
{
	int a =50,b=0,c=-3,d=-1;
	printf("%d %d %d %d\n",a,b,c,d);
	d= ++a || ++b || ++c;
        printf("%d %d %d %d\n",a,b,c,d);



        a=5,b=0,c=-3,d=-1;
        d= b++ && c++ && a++;
	printf("%d %d %d %d\n",a,b,c,d);


	a=5,b=0,c=-3,d=-1;
	d = ++b && ++c && ++a;
	printf("%d %d %d %d\n",a,b,c,d);
}

