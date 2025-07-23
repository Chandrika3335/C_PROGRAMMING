#include<stdio.h>
int main()
{
        static int var = 1;
	printf("var = %d at %lu\n",var,&var);
	++var;
	if(var<5)
		main();
	printf("bye from main\n");
	return 0;
}

