#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }

    
    for(int i=0;str[i]!='\0';i++)
    {
	   if(!isalnum(str[i]))
	   {
		  printf("Special charcater found\n");
		  return 0;
	   }
    }
    printf("No special character found\n");

    return 0;
}


