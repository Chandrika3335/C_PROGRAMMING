#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*void toLower(char *str)
{
    for(int i=0;str[i];i++)
    {
        str[i] = tolower(str[i]);
    }
}*/

void sortString(char *str)
{
    int i,j;
    int len= strlen(str);
    j = strlen(str)-1;
    char temp;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i]=str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    char str1[20];
    char str2[20];
    printf("enter the str1:");
    fgets(str1, sizeof(str1),stdin);
    if(str1[strlen(str1)-1]=='\n')
        str1[strlen(str1)-1] = '\0';
    printf("enter the str2:");
    fgets(str2, sizeof(str2),stdin);
    if(str2[strlen(str2)-1]=='\n')
        str2[strlen(str2)-1] = '\0';

    //toLower(str1);
    //toLower(str2);
    
    sortString(str1);
    sortString(str2);
    
    if(strcmp(str1,str2)==0)
    {
        printf("Anagram");
    }
    else
    {
        printf("not anagram");
    }
}
