//Write a program to replace all occurrences of sub string in main string with opposite case of every  alphabet.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_opposite_case(char *src, char *dest) {
    int i;
    for (i = 0; src[i]; i++) {
        if (islower(src[i]))
            dest[i] = toupper(src[i]);
        else if (isupper(src[i]))
            dest[i] = tolower(src[i]);
        else
            dest[i] = src[i];
    }
    dest[i] = '\0';
}

int main() {
    char str1[200], str2[50], temp[400] = "";
    char *pos, *curr;
    char swapped[50];
    int len, found = 0;

    printf("Enter main string (str1): ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter substring to find (str2): ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    to_opposite_case(str2, swapped);
    len = strlen(str2);
    curr = str1;

    while ((pos = strstr(curr, str2)) != NULL) {
        strncat(temp, curr, pos - curr);  // copy text before match
        strcat(temp, swapped);            // add swapped case substring
        curr = pos + len;                 // move past the match
        found = 1;
    }

    strcat(temp, curr); // add remaining text

    if (found)
        printf("Output: %s\n", temp);
    else
        printf("sub string not found\n");

    return 0;
}

