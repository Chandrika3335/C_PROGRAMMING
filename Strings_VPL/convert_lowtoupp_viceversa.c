#include<stdio.h>
#include<string.h> 
int main()
{
    char str[50];
    fgets(str, 50, stdin);
    //REMOVE NEWLINE
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
        }
        i++;
    }
    
    char *token;
    token = strtok(str, " ");
    while(token != NULL)
    {
        char *p = token;
        while(*p != '\0')
        {
            if((*p>='A') && (*p<='Z'))
            {
                *p = *p + 32;
            }
            else if(*p>='a' && *p<='z')
            {
                *p = *p - 32;
            }
            p++;
        }
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
