#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[20];
	printf("enter the string:");
	fgets(str, sizeof(str), stdin);
        if(str[strlen(str)-1]=='\n')
        {
             str[strlen(str)-1]='\0';
        
        }
	int upper = 0, lower = 0;

	for(int i=0; str[i]!='\0';i++)
	{
		if(str[i] >=65 && str[i]<=90)
		{
			upper++;
		}
		else if(str[i] >= 97 && str[i] <=122)
		{
			lower++;
		}
	}
	if(upper == lower)
	{
		printf("Equal\n");
	}

	else if(upper > lower)
	{
		printf("More uppercase");
	}
	else
	{
		printf("More lowercase");
	}
	return 0;
}


