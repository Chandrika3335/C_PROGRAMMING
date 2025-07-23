#include<stdio.h>
#include<string.h>
void digit_to_word(char ch)
{
	switch(ch)
	{
		case '0':printf("zero ");
			 break;
		case '1':printf("one ");
			 break;
		case '2':printf("two ");
			 break;
		case '3':printf("three ");
			 break;
		case '4':printf("four ");
			 break;
		case '5':printf("five ");
			 break;
		case '6':printf("six ");
			 break;
		case '7':printf("seven ");
			 break;
		case '8':printf("eight ");
			 break;
		case '9':printf("nine ");
			 break;
	}
}
int main()
{
	char str[20];
	printf("enter the string:");
	fgets(str,sizeof(str),stdin);
	if(str[strlen(str)-1]=='\n')
	{
		str[strlen(str)-1] ='\0';
	}
        int i=0;
	if(str[0] == '-')
	{
		printf("minus ");
		i=1;
	}

	for(;str[i]!='\0';i++)
	{
		digit_to_word(str[i]);
	}
	printf("\n");
}


