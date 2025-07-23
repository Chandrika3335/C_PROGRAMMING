#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *root = NULL; // Global root pointer

// Function to insert a node at the end
void Insert_at_end(int value) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    temp->data = value;
    temp->link = NULL;

    if (root == NULL) {  // If list is empty, new node becomes root
        root = temp;
    } else {
        struct node *p = root;
        while (p->link != NULL) {
            p = p->link;  // Move to last node
        }
        p->link = temp;  // Link new node to the last node
    }
}

// Function to display the linked list
void display() {
    struct node *p = root;
    if (p == NULL) {
        printf("List is empty\n");
        return;
    }

    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->link;
    }
    printf("NULL\n");
}

// Main function
int main() {
    // Creating a linked list with some nodes
    Insert_at_end(10);
    Insert_at_end(20);
    Insert_at_end(30);

    printf("Initial Linked List: ");
    display();

    // Inserting new nodes at the end
    Insert_at_end(40);
    Insert_at_end(50);

    printf("Linked List After Insertion: ");
    display();

    return 0;
}

