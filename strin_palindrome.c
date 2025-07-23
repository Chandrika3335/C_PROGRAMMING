#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) return 0;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str)) 
        printf("%s is a palindrome.\n", str);
    else 
        printf("%s is not a palindrome.\n", str);
    return 0;
}

