#include <stdio.h>
#include <string.h>

int btoi(char *bin) 
{
    int result = 0;

    for(int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] != '0' && bin[i] != '1') {
            return -1;  // Invalid character found
        }
        result = result * 2 + (bin[i] - '0');
    }

    return result;
}

int main() {
    char binary[100];
    printf("Enter binary string: ");
    scanf("%s", binary);

    int result = btoi(binary);

    if (result == -1) {
        printf("invalid input\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}

