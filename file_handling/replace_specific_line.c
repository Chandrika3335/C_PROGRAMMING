#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000
#define MAX_LEN 1024

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <filename> <line_number_to_replace>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    int line_num = atoi(argv[2]);

    if (line_num <= 0) {
        printf("Invalid line number.\n");
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    char lines[MAX_LINES][MAX_LEN];
    int count = 0;

    // Read all lines into array
    while (fgets(lines[count], MAX_LEN, fp)) {
        count++;
        if (count >= MAX_LINES) break;
    }
    fclose(fp);

    if (line_num > count) {
        printf("Line number exceeds total number of lines.\n");
        return 1;
    }

    // Get new content from user
    char newline[MAX_LEN];
    printf("Enter the new line: ");
    fgets(newline, MAX_LEN, stdin);

    // Ensure newline at end
    if (newline[strlen(newline) - 1] != '\n') {
        strcat(newline, "\n");
    }

    // Replace the specific line
    strcpy(lines[line_num - 1], newline);

    // Write back all lines to the file
    fp = fopen(filename, "w");
    for (int i = 0; i < count; i++) {
        fputs(lines[i], fp);
    }
    fclose(fp);

    printf("Line %d replaced successfully.\n", line_num);
    return 0;
}



/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000
#define MAX_LEN 1024

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <filename> <line_number> <new_line>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    int line_num = atoi(argv[2]);
    char *new_line = argv[3];

    if (line_num <= 0) {
        printf("Invalid line number.\n");
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    char lines[MAX_LINES][MAX_LEN];
    int count = 0;

    while (fgets(lines[count], MAX_LEN, fp)) {
        count++;
        if (count >= MAX_LINES) break;
    }
    fclose(fp);

    if (line_num > count) {
        printf("Line number exceeds total number of lines.\n");
        return 1;
    }

    // Replace the target line (ensure it ends with newline)
    snprintf(lines[line_num - 1], MAX_LEN, "%s\n", new_line);

    // Write all lines back to the file
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fputs(lines[i], fp);
    }

    fclose(fp);
    printf("Line %d replaced successfully.\n", line_num);
    return 0;
}*/

