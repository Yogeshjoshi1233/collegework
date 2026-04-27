#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* next;
};

int main() {
    int n;
    scanf("%d", &n);

    if(n <= 0) return 0;

    struct node *head = NULL, *temp = NULL, *newnode = NULL;

    // Create first node
    head = (struct node*)malloc(sizeof(struct node));
    scanf("%d", &head->data);
    head->next = head;  // circular
    temp = head;

    // Create remaining nodes
    for(int i = 1; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);

        newnode->next = head;   // point to head
        temp->next = newnode;   // link previous node
        temp = newnode;         // move temp
    }

    // Traversal
    struct node* current = head;

    do {
        printf("%d ", current->data);
        current = current->next;
    } while(current != head);

    return 0;
}