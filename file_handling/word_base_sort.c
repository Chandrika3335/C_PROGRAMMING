#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cnt = 0;

void *ReadFile(char *filename) {
    FILE *fp;
    char (*p)[100] = NULL;
    char str[100];
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Invalid file\n");
        exit(0);
    }

    while (fgets(str, 100, fp)) {
        p = realloc(p, (cnt + 1) * sizeof(*p));
        strcpy(p[cnt], str);
        cnt++;
    }

    fclose(fp);
    return p;
}

int countWords(char *str)
{
    int count = 0;
    char temp[100];
    strcpy(temp, str); 

    char *token = strtok(temp, " \t\n");

    while (token != NULL) {
        count++;
        token = strtok(NULL, " \t\n");
    }
    return count;
}


void *SortByWordCount(char (*p)[100]) {
    char temp[100];
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = i + 1; j < cnt; j++) {
            if (countWords(p[i]) > countWords(p[j]))  // Change to < for descending order
            {
                strcpy(temp, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], temp);
            }
        }
    }
    return p;
}

void Write(char (*p)[100], char *filename) 
{
    FILE *fp;
    fp = fopen(filename, "w");

    for(int i = 0; i < cnt; i++) 
    {
        fputs(p[i], fp);
    }

    fclose(fp);
}

int main(int argc, char *argv[]) 
{
    if (argc != 2) {
        printf("Invalid input\n");
        exit(0);
    }

    char (*line)[100] = NULL;
    line = ReadFile(argv[1]);
    line = SortByWordCount(line);
    Write(line, argv[1]);

    printf("File sorted by word count successfully!\n");
    return 0;
}

