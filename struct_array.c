//Array of structure variables
#include<stdio.h>
#include<string.h>

#define SIZE 2 // Define the size of the product array

struct product {
    char name[20];
    int price;
};

int main() {
    struct product arr[SIZE];
    int i;

    // Input details for each product
    for (i = 0; i < SIZE; i++) {
        printf("Enter details for product %d:\n", i + 1);

        // Input the name
        printf("Enter the name: ");
        if (i == 0) getchar(); // Clear the buffer for the first iteration
        fgets(arr[i].name, 20, stdin);

        // Remove trailing newline from fgets
        if (arr[i].name[strlen(arr[i].name) - 1] == '\n') {
            arr[i].name[strlen(arr[i].name) - 1] = '\0';
        }

        // Input the price
        printf("Enter the price: ");
        scanf("%d", &arr[i].price);

        // Clear the input buffer to avoid issues with fgets()
        while (getchar() != '\n'); // Discard remaining characters in the buffer
    }

    // Display details of each product
    printf("\nProduct Details:\n");
    for (i = 0; i < SIZE; i++) {
        printf("Product %d details:\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Price: %d\n", arr[i].price);
    }

    return 0;
}

