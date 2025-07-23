#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u');
}

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    char *word = strtok(str, " ");
    int found = 0;

    while (word != NULL) {
        int len = strlen(word);
        if (isVowel(word[0]) && isVowel(word[len - 1])) {
            printf("%s ", word);
            found = 1;
        }
        word = strtok(NULL, " ");
    }

    if (!found)
        printf("not found");

    printf("\n");
    return 0;
}

