#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int i;
    int *ptr[10];            


    for(i=0; i < 10; i++)
        ptr[i] = malloc(sizeof(int));

    for(i=0; i < 10; i++)
        *ptr[i] = i;        

    for(i=0; i < 10; i++) 
        printf("%d ",*ptr[i]);
    printf("\n");

    for(i=0; i < 10; i++)
        free(ptr[i]);
}
