#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* readFromFile(char *filename) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("File not found\n");
        exit(0);
    }
    fseek(fptr, 0, SEEK_END);
    long size = ftell(fptr);
    rewind(fptr); 

    char *buffer = (char *)malloc(size + 1);

    fread(buffer, 1, size, fptr);
    buffer[size] = '\0'; 

    fclose(fptr);
    return buffer;
}


char* Remove_all_occurrences(char *buffer, char *sub) {
    char *p;
    while ((p = strstr(buffer, sub)) != NULL) 
    {
      memmove(p, p + strlen(sub), strlen(p + strlen(sub)) + 1);
    }
    return buffer;
}

void WriteToFile(char *data,char *filename) 
{
    FILE *fptr = fopen(filename, "w");

    fputs(data, fptr);

    fclose(fptr);
}

int main(int argc, char *argv[]) 
{
    char *lines;
    
    if (argc != 3)
    {
      	printf("enter the input in the format exe filename substring\n");
        exit(0);
    }

    lines = readFromFile(argv[1]);

    lines = Remove_all_occurrences(lines , argv[2]);

    WriteToFile(lines, argv[1]);

    return 0;
}

