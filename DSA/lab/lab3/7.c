#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printList(){
    struct node *p = head;
    printf("\n[");
    while(p != NULL){
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("]");
}

void insertatbegin(int data){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void reverseList(){
    struct node *prev = NULL, *current = head, *next;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main(){
    insertatbegin(10);
    insertatbegin(20);
    insertatbegin(30);

    printf("Before Reverse:");
    printList();

    reverseList();

    printf("\nAfter Reverse:");
    printList();
    return 0;
}