#include<stdio.h>
#include<string.h>
void vowel_count(char str[], int *vowel_cnt)
{
	*vowel_cnt = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		char ch = str[i];
		if( ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch== 'i' || ch=='o' || ch=='u')
	        {
				(*vowel_cnt)++;
		}
	}
	
}
int main()
{
	char str[20];
	int vowel_cnt;
	printf("enter the string: ");
	scanf("%s", str);
	vowel_count(str, &vowel_cnt);
	printf("%d", vowel_cnt);
}
