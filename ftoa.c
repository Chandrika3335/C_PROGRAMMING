#include <stdio.h>

void ftoa(float num, char *res) {
    int intPart = (int)num;                  // Get integer part
    float frac = num - intPart;             // Get fractional part

    if (frac < 0) frac = -frac;             // Handle negative values

    int fracPart = (int)(frac * 10000 + 0.5);  // 4-digit fractional part, rounded

    // Store final string using sprintf
    sprintf(res, "%d.%04d", intPart, fracPart);
}

int main() {
    float num;
    char result[30];

    printf("Enter a float number: ");
    scanf("%f", &num);

    ftoa(num, result);
    printf("Converted string: %s\n", result);

    return 0;
}

