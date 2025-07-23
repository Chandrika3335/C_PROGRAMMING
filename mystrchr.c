//my_strchr
#include<stdio.h>
#include<string.h>
char *my_strchr(char *str,char ch)
{
    while(*str)
    {
        if(*str==ch)
        {
            return str;
        }
        str++;
    }
}
int main()
{
        char str[30],ch;
        printf("Enter main str:");
        fgets(str,30,stdin);
        if(str[strlen(str)-1]=='\n')
                str[strlen(str)-1]='\0';
        printf("Enter the character to search for first occurrence:");
        scanf("%c",&ch);
        char *p=my_strchr(str,ch);
        if(p==NULL)
        {
                printf("Sub string not present");
        }
        else
                printf("First occurrence of character is present at index:%ld",p-str);
}


