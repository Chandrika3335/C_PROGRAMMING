#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20], str2[20];
	int len1, len2;
	int i=0;
	printf("enter the string1:");
	fgets(str1, 20 , stdin);
	len1 = strlen(str1);

	if(str1[len1-1] == '\n')
	{
		str1[len1-1] = '\0';
	}
        
	printf("enter the string2:");
	fgets(str2, 20, stdin);
	len2 = strlen(str2);
	if(str2[len2-1] == '\n')
	{
		str2[len2-1] = '\0';
	}
	while(str1[i]!='\0' && str2[i]!= '\0')
	{
	      if(str1[i] != str2[i])
	      {
	          printf("Strings are not equal");
		  return 1;
	      }
	      i++;
        }
        if(str1[i]=='\0' && str2[i] =='\0')
	{
		printf("Strings are equal");
	}

}


