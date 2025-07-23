#include<stdio.h>
#include<string.h>
int btoi(char *bin)
{
	int result=0;
	for(int i=0; bin[i]!='\0';i++)
	{
		if(bin[i]!='0' && bin[i]!='1')
		{
			return -1;
		}
		result = result * 2 + (bin[i] - '0');
	}
	return result;
}

int main()
{
	char str[100];
	printf("enter the string:\n");
	fgets(str, sizeof(str), stdin);
	if(str[strlen(str)-1] == '\n')
	{
		str[strlen(str)-1] = '\0';
	}

	int num = btoi(str);
	if(num == -1)
	{
		printf("Invalid binary string\n");
	}
	else
	{
	        printf("Binary number:%d\n", num);
	}
	return 0;
}

