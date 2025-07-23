#include <stdio.h>
#include <string.h>

int is_palindrome(const char s[], int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);  // For now we assume no spaces. Use fgets for full lines.

    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        } else {
            // Debug print to understand what is being checked
            printf("Mismatch at left=%d (%c), right=%d (%c)\n", left, s[left], right, s[right]);

            // Try removing left character
            if (is_palindrome(s, left + 1, right)) {
                printf("%d\n", left);
                return 0;
            }
            // Try removing right character
            else if (is_palindrome(s, left, right - 1)) {
                printf("%d\n", right);
                return 0;
            } else {
                printf("can not be a palindrome\n");
                return 0;
            }
        }
    }

    // Already a palindrome
    printf("-1\n");
    return 0;
}

