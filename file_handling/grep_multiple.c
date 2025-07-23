#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void grep_in_file(const char *filename, const char *pattern)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Could not open file: %s\n", filename);
        return;
    }

    char line[1024];
    int line_number = 0;

    while (fgets(line, sizeof(line), fp))
    {
        line_number++;

        // Remove trailing newline (optional but cleaner)
        line[strcspn(line, "\n")] = '\0';

        if (strstr(line, pattern))
        {
            printf("%s:%d: %s\n", filename, line_number, line);
        }
    }

    fclose(fp);
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s <pattern> <file1> [file2 ... fileN]\n", argv[0]);
        return 1;
    }

    const char *pattern = argv[1];

    for (int i = 2; i < argc; i++)
    {
        grep_in_file(argv[i], pattern);
    }

    return 0;
}

