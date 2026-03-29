#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *header = NULL;

void Createlist(int n);
void insertAtBeginning(int data);
void display();

int main(){
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    Createlist(n);

    printf("Enter value to insert at beginning: ");
    scanf("%d",&value);

    insertAtBeginning(value);

    printf("\nLinked List after insertion:\n");
    display();

    return 0;
}

void Createlist(int n){
    struct node *temp, *newnode;
    int data, i;

    if(n == 0){
        return;
    }

    header = (struct node*)malloc(sizeof(struct node));

    printf("Enter data for node 1: ");
    scanf("%d",&data);

    header->data = data;
    header->next = NULL;
    temp = header;

    for(i = 2; i <= n; i++){
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data for node %d: ", i);
        scanf("%d",&data);

        newnode->data = data;
        newnode->next = NULL;

        temp->next = newnode;
        temp = newnode;
    }
}

void insertAtBeginning(int data){
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("Memory allocation failed\n");
        return;
    }

    newnode->data = data;
    newnode->next = header;
    header = newnode;
}

void display(){
    struct node *temp;

    if(header == NULL){
        printf("List is empty\n");
        return;
    }

    temp = header;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}