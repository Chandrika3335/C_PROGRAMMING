#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++; j--;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (!f) {
        printf("File not found\n");
        return 1;
    }

    char result[10000] = "", line[1000];

    while (fgets(line, sizeof(line), f)) {
        char *word = strtok(line, " \n");
        while (word) {
            reverse(word);
            strcat(result, word);
            strcat(result, " ");
            word = strtok(NULL, " \n");
        }
        strcat(result, "\n");
    }
    fclose(f);

    f = fopen(argv[1], "w");
    fputs(result, f);
    fclose(f);

    printf("Words reversed in file.\n");
    return 0;
}

