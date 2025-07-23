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

    for(int i=0; str[i]!='\0';i+=2)
    {
	    str[i] = toupper(str[i]);
    }
    printf("%s", str);
    return 0;
}

