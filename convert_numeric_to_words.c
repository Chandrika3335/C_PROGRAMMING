#include <stdio.h>
#include <ctype.h> // for isdigit()

int main() {
    char str[100];
    int i, found = 0;

    char *words[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // read line with spaces

    printf("Output: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            found = 1;
            printf("%s", words[str[i] - '0']);  // convert char digit to int index
        } else {
            printf("%c", str[i]);
        }
    }

    if (!found) {
        printf("Numeric character not found.");
    }

    printf("\n");
    return 0;
}

