#include <stdio.h>
#include <string.h>

int check_input(char *str) {
    if (*str == '-')  // skip leading minus
        str++;

    if (*str == '\0')  // no digits after minus
        return 1;

    while (*str) {
        if (*str < '0' || *str > '9')
            return 1;
        str++;
    }
    return 0;
}

int myatoi(char *str) 
{
    int num = 0, sign = 1;

    if(*str == '-') 
    {
        sign = -1;
        str++;
    }

    while(*str) 
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return sign * num;
}

int main() {
    char strone[20], strtwo[20];

    while (1) {
        printf("Enter str1: ");
        fgets(strone, sizeof(strone), stdin);
        if (strone[strlen(strone) - 1] == '\n')
            strone[strlen(strone) - 1] = '\0';

        if (check_input(strone))
            printf("Invalid input (str one)...Try again\n");
        else
            break;
    }

    while (1) {
        printf("Enter str2: ");
        fgets(strtwo, sizeof(strtwo), stdin);
        if (strtwo[strlen(strtwo) - 1] == '\n')
            strtwo[strlen(strtwo) - 1] = '\0';

        if (check_input(strtwo))
            printf("Invalid input (str two)...Try again\n");
        else
            break;
    }

    int num1 = myatoi(strone);
    int num2 = myatoi(strtwo);

    printf("Sum = %d\n", num1 + num2);

    return 0;
}



