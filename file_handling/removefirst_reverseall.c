#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char* str) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void removeFirstSubstringAndReverse(char* filename) {
    FILE *file = fopen(filename, "r+");
    if (file == NULL) {
        printf("File not found\n");
        return;
    }

    char line[1000];
    while (fgets(line, sizeof(line), file)) {
        char* firstSubstringEnd = strchr(line, ' ');
        if (firstSubstringEnd != NULL) {
            memmove(line, firstSubstringEnd + 1, strlen(firstSubstringEnd));
        }

        char* token = strtok(line, " ");
        while (token != NULL) {
            reverseString(token);
            printf("%s ", token);
            token = strtok(NULL, " ");
        }

        printf("\n");
    }

    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    removeFirstSubstringAndReverse(argv[1]);

    return 0;
}

