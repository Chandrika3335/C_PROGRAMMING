#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *word) {
    int i = 0, j = strlen(word) - 1;
    char temp;
    while (i < j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
}

void replace_and_reverse(const char *filename, const char *target) {
    FILE *src = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");
    if (!src || !temp) {
        printf("Error opening files\n");
        exit(1);
    }

    char line[1024], word[100], rev[100];
    strcpy(rev, target);
    reverse(rev);

    while (fgets(line, sizeof(line), src)) {
        char output[1024] = "";
        char *token = strtok(line, " \t\n");
        while (token) {
            if (strcmp(token, target) == 0)
                strcat(output, rev);
            else
                strcat(output, token);
            strcat(output, " ");
            token = strtok(NULL, " \t\n");
        }
        fprintf(temp, "%s\n", output);
    }

    fclose(src);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("All occurrences of '%s' replaced with '%s'.\n", target, rev);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <filename> <word>\n", argv[0]);
        return 1;
    }

    replace_and_reverse(argv[1], argv[2]);
    return 0;
}

