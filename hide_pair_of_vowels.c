#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isvowel(char ch)
{
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char str[50];
    int found = 0;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n')
    {
        str[strlen(str)-1]='\0';
    }
    
    
    for(int i=0; str[i+1]!='\0'; i++)
    {
        if(isvowel(str[i]) && isvowel(str[i+1]))
        {
            str[i] = '*';
            str[i+1] = '*';
            found = 1;
            i++;
        }
    }
    if(found)
    {
        printf("%s",str);
    }
    else
    {
        printf("no pair of vowels present");
    }
}
