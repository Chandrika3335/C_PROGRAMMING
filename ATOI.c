#include<stdio.h>
#include<string.h>
int atoi(char *str)
{
	int num=0, sign=1;
        while(*str == '-')
	{
	    sign = -1;
            *str++;
	}
        
        while(*str)
	{
	     num = num * 10 + (*str - '0');
             *str++;
	}
        return sign * num;
}	
int main()
{
	char str1[10], str2[10];
	printf("Enter the string1:\n");
	fgets(str1, sizeof(str1), stdin);
	if(str1[strlen(str1) - 1]== '\n')
	{
		str1[strlen(str1)-1] = '\0';
	}

	printf("enter the string2:\n");
	fgets(str2, sizeof(str2), stdin);
	if(str2[strlen(str2)-1] == '\n')
	{
		str2[strlen(str2)-1] = '\0';
	}

	int num1 = atoi(str1);
	int num2 = atoi(str2);
	int num = num1 + num2;
	printf("%d",num);
	return 0;
}
