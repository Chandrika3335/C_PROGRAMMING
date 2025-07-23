#include<stdio.h>
int main()
{
	char ch='0';
	((ch>=65) && (ch<=90))? printf("uppercase") : 
        ((ch>=97) && (ch<=122))? printf("lowercase") :
        printf("not an alphabet\n");
}	
