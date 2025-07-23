//Replace subtring with a newstring 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20],newstr[20];
    printf("enter the string1:");
    fgets(str1,sizeof(str1),stdin);
    if(str1[strlen(str1)-1]=='\n')
    {
        str1[strlen(str1)-1]='\0';
    }
    printf("enter the string2:");
    fgets(str2,sizeof(str2),stdin);
    if(str2[strlen(str2)-1]=='\n')
    {
        str2[strlen(str2)-1]='\0';
    }
    printf("enter the newstring:");
    fgets(newstr,sizeof(newstr),stdin);
    if(newstr[strlen(newstr)-1]=='\n')
    {
        newstr[strlen(newstr)-1]='\0';
    }
    
    char *ptr = str1;
    int count = 0;
    
    int len1 = strlen(str2);
    int len2 = strlen(newstr);
    
    while(ptr = strstr(str1,str2))
    {
        memmove(ptr+len2, ptr+len1, strlen(ptr+len1)+1);
        memmove(ptr, newstr, len2);
        ptr += len2;
        count++;
    }
    
    if(count == 0)
    {
        printf("No substring found");
    }
    else
    {
        printf("%s",str1);
    }
}

