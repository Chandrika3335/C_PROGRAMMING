#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[100], plain[100];
    int i, j = 0;

    printf("Enter the string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline if any
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    // Copy letters only, convert to lowercase
    for (i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            plain[j++] = tolower(input[i]);
        }
    }
    plain[j] = '\0';  // End the cleaned string

    // Check palindrome
    int start = 0, end = j - 1;
    int flag = 1;

    while (start < end) {
        if (plain[start] != plain[end]) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

