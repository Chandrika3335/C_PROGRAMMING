#include <stdio.h>

int main() {
    unsigned short num;
    printf("Enter a 16-bit number (0 to 65535): ");
    scanf("%hu", &num);

    int left = 15, right = 0;

    while (left > right) {
        unsigned short left_bit = num & (1 << left);
        unsigned short right_bit = num & (1 << right);

        // If bits differ, toggle both
        if (left_bit != right_bit) {
            num ^= (1 << left);
            num ^= (1 << right);
        }

        left--;
        right++;
    }

    printf("Reversed bits number (decimal): %hu\n", num);
    printf("In binary format:\n");
    for (int i = 15; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    return 0;
}

