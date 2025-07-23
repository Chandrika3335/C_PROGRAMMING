#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;
    int cap = 1; // Flag to capitalize next character

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through input string
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            cap = 1; // Set flag to capitalize next letter
        } else {
            if (cap) {
                result[j++] = toupper(str[i]);
                cap = 0;
            } else {
                result[j++] = tolower(str[i]);
            }
        }
        i++;
    }

    result[j] = '\0'; // Null-terminate the result
    printf("Result: %s\n", result);

    return 0;
}

