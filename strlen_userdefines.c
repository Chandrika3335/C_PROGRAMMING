#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i = 0;
	printf("enter the string:\n");
	fgets(str,20,stdin);
	while(str[i] != '\0')
	{
		if(str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
		i++;
	}
	printf("Length of the string is %d:",i);
}

	
