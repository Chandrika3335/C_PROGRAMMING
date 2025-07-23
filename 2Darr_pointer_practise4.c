#include<stdio.h>
int main()
{
	char s[][10] = {"int", "char", "void", "typedef"};
	char *p[] = {"struct", "union", "enum", "typedef"};
	printf("%lu %lu\n",sizeof(s),sizeof(*p));
	printf("%s %s\n",s[2],p[2]);
	printf("%s %s\n",s[3]+2,p[2]+1);
	printf("%c %c",s[1][2],p[1][2]);
}
