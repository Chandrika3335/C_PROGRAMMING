#include <stdio.h>

int main() {
    unsigned char num;
    printf("Enter an 8-bit number (0 to 255): ");
    scanf("%hhu", &num);

    int left = 7, right = 0;

    while (left > right) {
        unsigned char left_bit = num & (1 << left);
        unsigned char right_bit = num & (1 << right);

        // If bits differ, toggle both
        if (left_bit != right_bit) {
            num ^= (1 << left);
            num ^= (1 << right);
        }

        left--;
        right++;
    }

    printf("Reversed bits number (decimal): %hhu\n", num);
    printf("In binary format:\n");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    return 0;
}

