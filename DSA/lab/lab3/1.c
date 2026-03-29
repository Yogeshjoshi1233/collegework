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

int main(){
    insertatbegin(12);
    insertatbegin(22);
    insertatbegin(30);
    insertatbegin(40);
    insertatbegin(50);

    printf("Linked List:");
    printList();
    return 0;
}