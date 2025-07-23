#include<stdio.h>
#include<string.h>
void reverse(char *left, char *right) {
    char ch;
    while (left < right) 
    {
        ch = *left;
        *left = *right;
        *right = ch;
        left++;
        right--;
    }
}

int main()
{
	char s1[30];
	char s2[30];
	puts("enter 1st string:");
	fgets(s1,sizeof(s1),stdin);
	if(s1[strlen(s1)-1] == '\n')
	{
		s1[strlen(s1)-1] ='\0';
	}
        puts("enter 2nd string:");
	fgets(s2,sizeof(s2),stdin);
	if(s2[strlen(s2)-1] == '\n')
	{
		s2[strlen(s2)-1] = '\0';
	}

	char *temp=s1;
	int len2 = strlen(s2);
	while((temp=strstr(temp,s2))!=NULL)
	{
		reverse(temp, temp + len2 - 1);
		temp += len2;
	}
	printf("%s",s1);
}




