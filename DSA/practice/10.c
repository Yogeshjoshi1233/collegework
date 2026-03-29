#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *header = NULL;

void Createlist(int n);

int main(){
    int n;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    Createlist(n);

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