#include <stdio.h>
#include<string.h>
// User-defined strcpy function
void my_strcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char s1[100], s2[100], result[200];
    int pos, len1 = 0, len2 = 0, i;

    printf("Enter string 1: ");
    scanf("%s", s1);
    
    printf("Enter string 2: ");
    scanf("%s", s2);
    
    printf("Enter position to insert string 2 into string 1: ");
    scanf("%d", &pos);

    // Find lengths of s1 and s2
    //while (s1[len1] != '\0') len1++;
    //while (s2[len2] != '\0') len2++;
    len1 = strlen(s1);
    len2 = strlen(s2);

    // Validate the position
    if (pos < 0 || pos > len1) {
        printf("invalid location\n");
        return 0;
    }

    // Step 1: Copy s1[0] to s1[pos-1] into result
    for (i = 0; i < pos; i++) {
        result[i] = s1[i];
    }

    // Step 2: Copy s2 into result after pos using my_strcpy
    my_strcpy(result + i, s2);
    i += len2;

    // Step 3: Copy remaining part of s1 from pos onward
    my_strcpy(result + i, s1 + pos);

    // Output
    printf("Result: %s\n", result);

    return 0;
}

