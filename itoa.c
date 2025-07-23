#include <stdio.h>

int main() {
    int num, i = 0, j, temp;
    char str[100];

    printf("Enter integer: ");
    scanf("%d", &num);

    // handle zero case
    if (num == 0) {
        str[i++] = '0';
    }

    // extract digits
    while (num > 0) {
        str[i++] = (num % 10) + '0';
        num = num / 10;
    }
    str[i] = '\0';

    // reverse the string
    for (j = 0; j < i/2; j++) {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

} 
