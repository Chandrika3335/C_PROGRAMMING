#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cnt = 0;
/*void remove_newline(char *str) 
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0'; 
    }
}*/

int count_words(char *line) 
{

     int count = 0;
    char str[100];
    strcpy(str,line);
    char *p = strtok(line, " \t\n");
    while (p) {
        count++;
        p = strtok(NULL, " \t\n");
    }
    return count;
}

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
        //remove_newline(str);
	p = realloc(p, (cnt + 1) * sizeof(*p));
        strcpy(p[cnt], str);
        cnt++;
    }

    fclose(fp);
    return p;
}

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

void Write(char (*p)[100], char *filename) {
    FILE *fp;
    fp = fopen(filename, "w");

    for (int i = 0; i < cnt; i++) {
        fputs(p[i], fp);
	fputc('\n',fp);
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

