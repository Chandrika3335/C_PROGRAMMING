#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num = abs(num);  // Handle negative numbers

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    int digits[10]; // store digits
    int n = 0, temp = num;

    // Store digits in reverse order
    while (temp > 0) {
        digits[n++] = temp % 10;
        temp /= 10;
    }

    int found = 0;

    // Check from most significant digit
    for (int i = n - 1; i >= 0; i--) {
        int repeat = 0;
        for (int j = 0; j < n; j++) {
            if (i != j && digits[i] == digits[j]) {
                repeat = 1;
                break;
            }
        }
        if (!repeat) {
            printf("%d ", digits[i]);
            found = 1;
        }
    }

    if (!found)
        printf("no non-repeated numbers");

    printf("\n");
    return 0;
}

