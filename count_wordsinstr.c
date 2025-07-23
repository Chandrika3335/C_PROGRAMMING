#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]="today is v birthday";
	char *p = str;
	int len=strlen(str);
	int cnt =0;
	for(p=str;p=strtok(p," ");p=NULL)
	{
		cnt++;
		printf("%s\n",p);

	}
	for(int i=0; i<len; i++)
	{
		if(str[i] == '\0')
		{
			str[i] = ' ';
		}
	}
	printf("main str = %s\n",str);
	printf("no of words = %d", cnt);

}

