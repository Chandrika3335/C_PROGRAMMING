#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int i;
    int *ptr, *loopPtr;
    ptr = malloc(10 * sizeof(int)); 

    loopPtr = ptr;            
    for(i=0; i < 10; i++) {
        *loopPtr = i;         
        loopPtr++;         
    }

    loopPtr = ptr;           
    for(i=0; i < 10; i++) 
        printf("%d, ",*(loopPtr++)); 
    printf("\n");
    free(ptr);       
}
