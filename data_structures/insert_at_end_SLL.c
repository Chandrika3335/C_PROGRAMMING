#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *root = NULL;

void Insert_at_end() {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter the node data: ");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if (root == NULL) {
        root = temp;  // First node case
    } else {
        struct node *p = root;
        while (p->link != NULL) {
            p = p->link;  // Move to the last node
        }
        p->link = temp;  // Link the last node to the new node
    }
}

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

int main() {
    Insert_at_end();
    Insert_at_end();
    Insert_at_end();
    Insert_at_end();

    printf("Linked List: ");
    display();

    return 0;
}

