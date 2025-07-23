#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    
    num |= (1 << 1); 
    num |= (1 << 3);
    num |= (1 << 5);
    num |= (1 << 7);
    num |= (1 << 9); 

    printf("%d",num);

    return 0;
}
