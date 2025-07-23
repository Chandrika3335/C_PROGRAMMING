#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Remove_line(char *filename, int line_to_remove)
{
    FILE *fptr = fopen(filename,"r");
    if(fptr == NULL)
    {
        printf("file not found\n");
        exit(0);
    }
    
    FILE *temp = fopen("temp.txt","w");
    if(temp == NULL)
    {
        printf("unable to create the file\n");
        fclose(fptr);
        exit(0);
    }
    
    char buffer[1000];
    int line_number = 1;
    while(fgets(buffer,sizeof(buffer),fptr))
    {
        if(line_number != line_to_remove)
        {
            fputs(buffer,temp);
        }
        line_number++;
    }
    
    fclose(fptr);
    fclose(temp);
    
    remove(filename);
    rename("temp.txt",filename);
    
}
int main(int argc,char *argv[])
{
    if(argc!=3)
    {
        printf("enter the input in the format of exe filename linetoberemoved\n");
        exit(0);
    }
    
    int line_to_remove = atoi(argv[2]);
    if(line_to_remove<1)
    {
        printf("entered invalif line number\n");

    }
    
    Remove_line(argv[1],line_to_remove);
}

    

