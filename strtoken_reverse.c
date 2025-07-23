#include<stdio.h>
#include<string.h>
void my_strrev(char *p)
{
	int i,j;
	char t;
	j=strlen(p)-1;
	for(i=0; i<j; i++, j--)
	{
		t = p[i];
		p[i] = p[j];
		p[j] = t;
	}
}

int main()
{
	char str[20];
	printf("enter the string:");
	fgets(str,sizeof(str),stdin);
	char *p=str;
	int len=strlen(str);
	int n;
	printf("enter the n value\n");
	scanf("%d",&n);
	int cnt=0;
	for(p=str;p=strtok(p," ");p=NULL)
	{
		cnt++;
		if(cnt == n)
		{
			my_strrev(p);
			break;
		}

	}
	for(int i=0; i<len; i++)
	{
		if(str[i] == '\0')
		{
			str[i]=' ';
		}
	}
	printf("String: %s\n",str);
}


	

