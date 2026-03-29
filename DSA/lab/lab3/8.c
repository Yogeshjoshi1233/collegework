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

int search(int key){
    struct node *temp = head;
    while(temp != NULL){
        if(temp->data == key)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main(){
    insertatbegin(10);
    insertatbegin(20);
    insertatbegin(30);

    printList();

    if(search(20))
        printf("\nElement Found");
    else
        printf("\nElement Not Found");

    return 0;
}