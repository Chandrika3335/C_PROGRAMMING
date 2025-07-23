#include <stdio.h>

int main() {
    unsigned int num;
    int pos;

    printf("Enter a 32-bit number: ");
    scanf("%u", &num);

    printf("Enter bit position to toggle (0-31): ");
    scanf("%d", &pos);

    if (pos < 0 || pos > 31) {
        printf("Invalid bit position. Must be between 0 and 31.\n");
        return 1;
    }

    printf("Before toggle: %u (Binary: ", num);
    for (int i = 31; i >= 0; i--)
        printf("%d", (num >> i) & 1);
    printf(")\n");

    // Toggle the bit at position `pos`
    num ^= (1U << pos);

    printf("After toggle : %u (Binary: ", num);
    for (int i = 31; i >= 0; i--)
        printf("%d", (num >> i) & 1);
    printf(")\n");

    return 0;
}

