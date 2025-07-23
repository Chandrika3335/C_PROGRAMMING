#include<stdio.h>
int main()
{
	printf("in first\n");
	printf("in second\n");
	goto B;
	printf("in third\n");
	printf("in fourth\n");
B:printf("in fifth\n");
  printf("in sixth\n");
  goto end;
  printf("in seventh\n");
end:printf("byeeee\n");
}
