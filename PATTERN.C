#include <stdio.h>

int main() {
    char ch;
    int i, j;

    // Upper half of the pattern
    for(i = 0; i < 3; i++) {
        ch = 'A';

        // Print first part of the row
        for(j = 0; j < 4 - i; j++) {
            printf("%c ", ch);
            ch++;
        }

        // Print spaces in the middle
        for(j = 0; j < 2 * i - 1; j++) {
            printf("  ");
        }

        // Print second part of the row
        ch--;
        for(j = 0; j < 4 - i; j++) {
            ch--;
            printf("%c ", ch);
        }

        printf("\n");
    }

    // Lower half of the pattern
    for(i = 1; i >= 0; i--) {
        ch = 'A';

        // Print first part of the row
        for(j = 0; j < 4 - i; j++) {
            printf("%c ", ch);
            ch++;
        }

        // Print spaces in the middle
        for(j = 0; j < 2 * i - 1; j++) {
            printf("  ");
        }

        // Print second part of the row
        ch--;
        for(j = 0; j < 4 - i; j++) {
            ch--;
            printf("%c ", ch);
        }

        printf("\n");
    }

    return 0;
}

