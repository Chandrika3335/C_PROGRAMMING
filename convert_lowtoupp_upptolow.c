#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n')
    {
        str[strlen(str)-1]= '\0';
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // to lowercase
        }
    }

    printf("%s", str);

    return 0;
}

