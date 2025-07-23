#include<stdio.h>
#include<string.h>
void reverse_string(char str[])

{

	int n = strlen(str);
	for(int i=0;i<n/2;i++)
	{
		char temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
}

int main()
{
	char str[10];
	printf("enter the name\n");
	scanf("%s",str);
	reverse_string(str);
	printf("%s",str);
	return 0;
}

