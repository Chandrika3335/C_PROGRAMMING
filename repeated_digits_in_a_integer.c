#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num = abs(num);  // Handle negative numbers

    if (num == 0) {
        printf("no repeated digits\n");
        return 0;
    }

    int digits[10];  // Store digits (max 10 digits for int)
    int n = 0;
    int temp = num;

    // Extract digits into array (reverse order)
    while (temp > 0) {
        digits[n++] = temp % 10;
        temp /= 10;
    }

    int found = 0;

    // Check each digit for repeats
    for (int i = n - 1; i >= 0; i--) {
        int repeated = 0;

        // Check if this digit was already checked
        int already_printed = 0;
        for (int k = n - 1; k > i; k--) {
            if (digits[i] == digits[k]) {
                already_printed = 1;
                break;
            }
        }
        if (already_printed)
            continue;

        for (int j = 0; j < n; j++) {
            if (i != j && digits[i] == digits[j]) {
                repeated = 1;
                break;
            }
        }

        if (repeated) {
            printf("%d ", digits[i]);
            found = 1;
        }
    }

    if (!found)
        printf("no repeated digits");

    printf("\n");
    return 0;
}

