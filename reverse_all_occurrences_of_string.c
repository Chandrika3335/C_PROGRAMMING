#include<stdio.h>
#include<string.h>
void reverse(char *ptr, int len)
{
	int i = 0, j=len-1;
	while(i<j)
	{
	       	char temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;
		i++;
		j--;
	}


}
int main()
{
	char str1[50];
	char str2[50];
	printf("enter the string1:");
	fgets(str1, sizeof(str1),stdin);
	if(str1[strlen(str1)-1] == '\n')
	
	{
		str1[strlen(str1)-1]= '\0';
	}
	printf("enter the substring:");
	fgets(str2, sizeof(str2),stdin);                                                                                        
	if(str2[strlen(str2)-1] == '\n')
	{  
             str2[strlen(str2)-1] = '\0';
	}	     
	
	char *ptr=str1;
	int found = 0;

	int len = strlen(str2);
	while((ptr = strstr(ptr, str2))!=NULL)
	{
		reverse(ptr, len);
		ptr += len;
		found = 1;
	}
	if(found)
	{
		printf("%s\n",str1);
	}
        else
	{
	        printf("substring not found\n");
	}
}	

