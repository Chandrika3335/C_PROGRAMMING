/*Swap the case of each character in the string only if it is an alphabet, and replace digits with *.

🧪 Input: HelLo123 → Output: hELlO***
*/


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[20];
    int isspace = 0;
    printf("enter the string:");
    fgets(str, sizeof(str), stdin);
    if(str[strlen(str)-1]=='\n')
    {
        str[strlen(str)-1]='\0';

    }

    for(int i=0; str[i]!='\0';i++)
    {
	    if(str[i]>=65 && str[i] <=90)
	    {
		    str[i] = tolower(str[i]);
	    }
	    else if(str[i]>=97 && str[i]<=122)
	    {
		    str[i] = toupper(str[i]);
	    }
	    else if(str[i] >= 48 && str[i] <=57)
	    {
		    str[i] = '*';
	    }
    }
    printf("%s", str);
    return 0;
}

