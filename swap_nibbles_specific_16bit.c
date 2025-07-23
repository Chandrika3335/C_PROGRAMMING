#include <stdio.h>

unsigned short swapNibblesInShort(unsigned short num, int n1, int n2) {
   
    unsigned short nib1 = (num >> (n1 * 4)) & 0xF;
    unsigned short nib2 = (num >> (n2 * 4)) & 0xF;

    
    num &= ~(0xF << (n1 * 4));
    num &= ~(0xF << (n2 * 4));

    num |= (nib1 << (n2 * 4));
    num |= (nib2 << (n1 * 4));

    return num;
}

int main() {
    unsigned short num = 0xABCD;
    int n1 = 0, n2 = 2;

    printf("Original : 0x%X\n", num);
    unsigned short result = swapNibblesInShort(num, n1, n2);
    printf("Swapped  : 0x%X\n", result);

    return 0;
}

