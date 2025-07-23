#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cnt = 0;

// Function to remove newline character from a line
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Remove the newline
    }
}

// Function to count words in a line
int count_words(char *line) {
    int count = 0;
    char str[100];
    strcpy(str, line);  // Copy the line to avoid modifying the original
    char *p = strtok(str, " \t\n");  // Tokenize based on spaces, tabs, and newlines
    while (p) {
        count++;
        p = strtok(NULL, " \t\n");
    }
    return count;
}

// Function to read lines from the file
void *ReadFile(char *filename) {
    FILE *fp;
    char (*p)[100] = NULL;
    char str[100];
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Invalid file\n");
        exit(0);
    }

    while (fgets(str,sizeof(str),fp))
    {
        p = realloc(p, (cnt + 1) * sizeof(*p));  // Resize the array to store one more line
        strcpy(p[cnt], str);  // Copy the line into the array
        cnt++;
    }

    fclose(fp);
    return p;
}

// Function to sort lines based on the number of words
void *SortByWords(char (*p)[100]) {
    char temp[100];
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = i + 1; j < cnt; j++) {
            if (count_words(p[i]) > count_words(p[j])) {
                strcpy(temp, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], temp);
            }
        }
    }
    return p;
}

// Function to write the sorted lines back to the file
void Write(char (*p)[100], char *filename) {
    FILE *fp;
    fp = fopen(filename, "w");

    for (int i = 0; i < cnt; i++) {
        fputs(p[i], fp);    // Write the line to the file
        fputc('\n', fp);     // Ensure each line ends with a newline character
    }

    fclose(fp);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Invalid input\n");
        exit(0);
    }

    char (*line)[100] = NULL;
    line = ReadFile(argv[1]);
    line = SortByWords(line);
    Write(line, argv[1]);

    printf("File sorted by number of words successfully!\n");
    return 0;
}

