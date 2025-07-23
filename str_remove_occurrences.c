#include<stdio.h>
#include<string.h>
void remove_all_occurrences(char *s1, const char *s2)
{
	char *temp=s1;
	int len2=strlen(s2);
	while((temp = strstr(temp,s2)) != NULL)
	{
		memmove(temp ,temp+len2, strlen(temp + len2)+1);
	}

}
int main()
{
	char s1[50],s2[10];
	puts("enter 1st string:");
	fgets(s1,sizeof(s1),stdin);
	if(s1[strlen(s1)-1] =='\n')
	{
		s1[strlen(s1)-1] = '\0';
	}

	puts("enter 2nd string:");
	fgets(s2,sizeof(s2),stdin);
	if(s2[strlen(s2)-1] == '\n')
	{
		s2[strlen(s2)-1] = '\0';
	}

	remove_all_occurrences(s1,s2);

	printf("%s",s1);
}
