#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	gets(str);
	int count=0;
	char *left,*right;
	left = str;
	right = str+strlen(str)-1;
	while(left<right)
	{
		if(*left == *right)
		{
			count++;
		}
		left++;
		right--;
	}
	if(count == strlen(str)/2)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
}
	
