/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_word(char *word) {
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

void reverse_each_word(char *filename)
{
    FILE *file = fopen(filename, "r+");
    if(file == NULL) 
    {
        printf("File not found\n");
        exit(0);
    }

    char str[1024];
    while(fgets(str, sizeof(str), file)) 
    {
      
	char *word = strtok(str, " ");
        while(word != NULL) 
	{
             reverse_word(word);
             printf("%s ", word);
	     word = strtok(NULL, "\n");
	}
	printf("\n");
    }
    
}


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    reverse_each_word(argv[1]);
    return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_word(char *word) {
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

void process_line(char *line) {
    char *word = strtok(line, " \n");
    while (word != NULL) {
        reverse_word(word);
        printf("%s ", word);
        word = strtok(NULL, " \n");
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }

    char line[1024];
    while (fgets(line, sizeof(line), file)) {
        process_line(line);
    }

    fclose(file);
    return 0;
}

