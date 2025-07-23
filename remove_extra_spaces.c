#include <stdio.h>
#include <string.h>

int main() {
    char string[200];
    int i, j, len;

    printf("Enter a statement: ");
    fgets(string, sizeof(string), stdin);

    // Remove newline if present
    len = strlen(string);
    if (string[len - 1] == '\n') {
        string[len - 1] = '\0';
        len--;
    }

    // Remove leading spaces
    while (string[0] == ' ') {
        for (i = 0; i < len; i++) {
            string[i] = string[i + 1];
        }
        len--;
    }

    // Remove extra spaces in between
    for(i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' && string[i + 1] == ' ') {
            //for (j = i; string[j] != '\0'; j++) {
                //string[j] = string[j + 1];
		string[i] = string[i+1];
            }
            i--; // Recheck current position
        }
    }

    // emove trailing space
    
    if(len > 0 && string[len - 1] == ' ') {
        string[len - 1] = '\0';
    }

    // Print result
    if (strlen(string) == 0)
        printf("empty string\n");
    else
        printf("%s", string);

    return 0;
}

