//my_strstr
#include<stdio.h>
#include<string.h>
char* mystrstr(char *main ,char *sub)
{
        char *p1,*p2;
        while(*main)
        {
                p1=main;
                p2=sub;
                while( *p1 && *p2 && *p1==*p2 )
                {
                        p1++;
                        p2++;
                }
                if(*p2=='\0')
                        return main;
                main++;
        }
        return NULL;
}
int main()
{
        char main[30],sub[20];
        printf("Enter main str:");
        fgets(main,30,stdin);
        if(main[strlen(main)-1]=='\n')
                main[strlen(main)-1]='\0';
        printf("Enter sub string:");
        fgets(sub,20,stdin);
        if(sub[strlen(sub)-1]=='\n')
                sub[strlen(sub)-1]='\0';
        char *p=mystrstr(main,sub);
        if(p==NULL)
        {
                printf("Sub string not present");
        }
        else
                printf("Sub string is present at index:%ld",p-main);
}

