#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void toggle_case(char *filename) {
    FILE *fp = fopen(filename, "r+");
    if (fp == NULL) {
        printf("File not found: %s\n", filename);
        exit(1);
    }

    char ch;
    long pos;

    while ((ch = fgetc(fp)) != EOF) {
        pos = ftell(fp);       // Get current position
        fseek(fp, -1, SEEK_CUR); // Move back one character

        if (islower(ch))
            fputc(toupper(ch), fp);
        else if (isupper(ch))
            fputc(tolower(ch), fp);
        else
            fputc(ch, fp); // Write unchanged

        // No need to manually move forward; fgetc does it
    }

    fclose(fp);
    printf("Case toggled successfully in file: %s\n", filename);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    toggle_case(argv[1]);
    return 0;
}

