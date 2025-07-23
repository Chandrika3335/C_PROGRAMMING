#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void word_count(const char *filename) {
    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Could not open file: %s\n", filename);
        return;
    }

    int words = 0;
    int in_word = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Words: %d\n", words);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    word_count(argv[1]);
    return 0;
}

