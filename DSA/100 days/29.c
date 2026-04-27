#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* next;
};

// Function to create linked list
struct node* createList(int n) {
    struct node *head = NULL, *temp = NULL, *newnode;
    
    for(int i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

// Function to rotate list
struct node* rotateRight(struct node* head, int k) {
    if(head == NULL || head->next == NULL || k == 0)
        return head;

    struct node *temp = head;
    int n = 1;

    // Find length and last node
    while(temp->next != NULL) {
        temp = temp->next;
        n++;
    }

    // Make it circular temporarily
    temp->next = head;

    // Optimize k
    k = k % n;
    int steps = n - k;

    // Move to new tail
    struct node *newTail = head;
    for(int i = 1; i < steps; i++) {
        newTail = newTail->next;
    }

    // Set new head
    struct node *newHead = newTail->next;

    // Break the circle
    newTail->next = NULL;

    return newHead;
}

// Function to print list
void printList(struct node* head) {
    struct node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n, k;
    
    scanf("%d", &n);
    struct node* head = createList(n);

    scanf("%d", &k);

    head = rotateRight(head, k);

    printList(head);

    return 0;
}