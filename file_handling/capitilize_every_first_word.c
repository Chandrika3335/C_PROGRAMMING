#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void *Word_upper(char *filename) {
    FILE *fptr = fopen(filename, "r+");
    if (fptr == NULL) {
        printf("file not found\n");
        exit(0);
    }

    char str[100];
    while (fgets(str, sizeof(str), fptr)) {
        for (int i = 0; i < strlen(str); i++) {
            if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') {
                str[i] = toupper(str[i]);
            }
        }
        fseek(fptr, -strlen(str), SEEK_CUR);
        fputs(str, fptr);
    }

    fclose(fptr);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("enter the input in the given format as exe filename\n");
        exit(0);
    }
    Word_upper(argv[1]);
    return 0;
}

