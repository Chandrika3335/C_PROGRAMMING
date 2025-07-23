#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void remove_line(const char *filename, int line_to_remove) 
{
    FILE *file = fopen(filename, "r");
    if(file==NULL) {
        printf("File not found!\n");
        exit(1);
    }

    FILE *temp = fopen("temp.txt", "w");
    if (!temp) 
    {
        printf("Unable to create temporary file!\n");
        fclose(file);
        exit(1);
    }

    char buffer[1024];
    int line_number = 1;

    while (fgets(buffer, sizeof(buffer), file)) 
    {
        if(line_number != line_to_remove) 
	{
            fputs(buffer, temp);
        }
        line_number++;
    }
    fclose(file);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Line %d removed successfully.\n", line_to_remove);
}
int main(int argc, char *argv[]) 
{
    if (argc != 3) 
    {
        printf("Usage: %s <filename> <line_number>\n", argv[0]);
        return 1;
    }

    int line_to_remove = atoi(argv[2]);
    if (line_to_remove <= 0) 
    {
        printf("Invalid line number!\n");
        return 1;
    }
    remove_line(argv[1], line_to_remove);
    return 0;
}


