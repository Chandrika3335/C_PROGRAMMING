#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read_particular_word(const char *filename, int target)
{
	int num;
	FILE *fptr;
	fptr = fopen("Student_Details.txt","r");

        if(fptr==NULL)
        {
                printf("File not found\n");
                exit(0);
        }

        while(fscanf(fptr, "%d", &num) == 1)
        {
                if(num == target)
                {
                        printf("Found the number:%d\n",num);     
		}
	}
	fclose(fptr);
}

int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("give the input in the correct format\n");
		exit(0);
	}
	int target = atoi(argv[2]);
	read_particular_word(argv[1],target);
}



