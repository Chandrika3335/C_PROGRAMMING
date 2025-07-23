#include<stdio.h>
#include<string.h>
void removeextraspaces(char *str)
{
	int i=0, j= 0;
	int isspace = 0;

	while(str[i] == ' ')
	{
		i++;
	}

	while(str[i] != '\0')
	{
		if(str[i] != ' ')
		{
			str[j++] = str[i++];
			isspace = 0;
		}
		else
		{
			if(!isspace)
			{
				str[j++] =' ';
				isspace = 1;
			}
			i++;
		}
	}
	if(j>0 &&str[j-1] == ' ')
	{
		j--;
	}
	str[j] = '\0';
}
int main()
{
	char str[50];
	printf("enter the string:");
	fgets(str,sizeof(str),stdin);
	if(str[strlen(str)-1] == '\n')
	{
		str[strlen(str)-1] = '\0';
	}
	removeextraspaces(str);

	printf("%s\n",str);
}

