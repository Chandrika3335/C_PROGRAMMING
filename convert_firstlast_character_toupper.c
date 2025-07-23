#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    int len = strlen(str);
    if(len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    for (int i = 0; str[i] != '\0'; i++) 
    {
        // Check if current char is first char of a word
        if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') 
	{
            if (isalpha(str[i])) {
                str[i] = toupper(str[i]);
            }
        }

        // Check if current char is last char of a word
        if (str[i] != ' ' && str[i] != '\t' && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')) 
	{
            if (isalpha(str[i])) 
	    {
                str[i] = toupper(str[i]);
            }
        }
    }

    printf("Output: %s\n", str);
    return 0;
}

