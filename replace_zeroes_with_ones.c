#include <stdio.h>

int main() {
    int num, result = 0, place = 1;
    int digit, hasZero = 0;
    int isNegative = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Special case for zero
    if (num == 0) {
        printf("1\n");
        return 0;
    }

    // Handle negative number
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    // Process each digit
    while (num > 0) {
        digit = num % 10;
        if (digit == 0) {
            digit = 1;
            hasZero = 1;
        }
        result += digit * place;
        place *= 10;
        num /= 10;
    }

    // Reapply sign
    if (isNegative) {
        result = -result;
    }

    // Final output
    if (hasZero)
        printf("%d\n", result);
    else
        printf("no zeros in input\n");

    return 0;
}

