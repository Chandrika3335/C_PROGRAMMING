#include <stdio.h>

int main() {
    int start, end;
    printf("Enter range (start and end): ");
    scanf("%d %d", &start, &end);

    if (start >= end || start < 0 || end <= 0) {
        printf("invalid range\n");
        return 0;
    }

    for (int i = start; i <= end; i++) {
        if (i % 9 == 0 && i != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

