#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to reverse a string in-place
void reverse(char *str) {
    int i = 0, j = strlen(str) - 1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

// Function to replace all occurrences of old word with reverse of new word
void replace_with_reverse(const char *filename, const char *old, const char *new_word) {
    FILE *fp = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");
    char line[1024];
    char reversed[100];

    if (!fp || !temp) {
        printf("Error opening file.\n");
        exit(1);
    }

    strcpy(reversed, new_word);
    reverse(reversed);  // reverse the new word once

    while (fgets(line, sizeof(line), fp)) {
        char *start = line;
        char buffer[2048] = "";
        char *pos;

        while ((pos = strstr(start, old)) != NULL) {
            strncat(buffer, start, pos - start);  // copy before match
            strcat(buffer, reversed);             // add reversed word
            start = pos + strlen(old);            // move past match
        }

        strcat(buffer, start);  // append the rest of the line
        fputs(buffer, temp);
    }

    fclose(fp);
    fclose(temp);
    remove(filename);
    rename("temp.txt", filename);

    printf("Replacement done.\n");
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <filename> <oldword> <newword>\n", argv[0]);
        return 1;
    }

    replace_with_reverse(argv[1], argv[2], argv[3]);
    return 0;
}

