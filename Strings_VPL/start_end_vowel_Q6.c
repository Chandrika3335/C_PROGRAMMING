#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    //Remove New Line
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

    while(token!=NULL)
    {
        
        int first = tolower(token[0]);
        int last = tolower(token[strlen(token)-1]);
        if((first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') &&
              (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u'))
        {
            printf("%s\t",token);
        }
        
        
        token = strtok(NULL, " ");
    }
    
    
}
