#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InsertLinetoFile(const char *file1, const char *file2, int lineno) {
    FILE *fptr1, *fptr2, *temp;
    char buffer[256];
    int currentLine = 1;

    fptr1 = fopen(file1, "r");
    if (fptr1 == NULL) {
        printf("Error: Cannot open %s\n", file1);
        exit(1);  // Exit if file1 is not found
    }

    fptr2 = fopen(file2, "r");
    if (fptr2 == NULL) {
        printf("Error: Cannot open %s\n", file2);
        fclose(fptr1);
        exit(1);
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error: Cannot create temporary file\n");
        fclose(fptr1);
        fclose(fptr2);
        exit(1);
    }

    printf("Files opened successfully!\n");

    while (fgets(buffer, sizeof(buffer), fptr1) != NULL) {
        if (currentLine == lineno)
       	{
            printf("Inserting content from %s at line %d\n", file2, lineno);
            char tempBuffer[256];
            while (fgets(tempBuffer, sizeof(tempBuffer), fptr2) != NULL) 
	    {
                fputs(tempBuffer, temp);
            }
        }
        fputs(buffer, temp);
        currentLine++;
    }

    if (currentLine <= lineno) {
        char tempBuffer[256];
        while (fgets(tempBuffer, sizeof(tempBuffer), fptr2) != NULL) {
            fputs(tempBuffer, temp);
        }
    }

    fclose(fptr1);
    fclose(fptr2);
    fclose(temp);

    printf("Closing files and replacing %s\n", file1);

    remove(file1);
    rename("temp.txt",file1);

    printf("Successfully inserted content from %s into %s at line %d\n",file2, file1, lineno);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <file1> <file2> <line_number>\n", argv[0]);
        exit(1);
    }

    int line_number = atoi(argv[3]);
    if (line_number < 1) {
        printf("Error: Line number should be greater than 0\n");
        exit(1);
    }

    InsertLinetoFile(argv[1], argv[2], line_number);

    return 0;
}

