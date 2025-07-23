#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, dot = 0, digit = 0, other = 0;

    printf("Enter input: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        } else if (str[i] == '.') {
            dot++;
        } else {
            other++;
        }
    }

    if (other > 0 || dot > 1 || digit == 0) {
        printf("Invalid input\n");
    } else if (dot == 1) {
        printf("Floating number\n");
    } else {
        printf("Integer number\n");
    }

    return 0;
}

