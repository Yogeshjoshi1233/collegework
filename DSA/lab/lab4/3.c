#include<stdio.h>      // For input/output functions like printf
#include<stdlib.h>     // For dynamic memory allocation (malloc, free)

// Define structure for stack node
struct node{
    int data;              // To store data
    struct node *next;     // Pointer to next node
};

// Initialize top pointer of stack as NULL (empty stack)
struct node *top = NULL;
// Function to insert (push) an element into stack
void push(int value){
    // Allocate memory for new node
    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    // Assign value to new node
    newnode->data = value;

    // Link new node to current top
    newnode->next = top;

    // Update top to new node
    top = newnode;

    // Print confirmation message
    printf("%d is pushed \n", value);   // FIXED: was printing pointer earlier
}

// Function to remove (pop) top element from stack
void pop(){
    struct node *temp;

    // Check for underflow (empty stack)
    if(top == NULL){
        printf("Stack is underflow\n");
    }
    else{
        // Store current top in temp
        temp = top;

        // Print popped value
        printf("%d popped from stack\n", top->data);

        // Move top to next node
        top = top->next;

        // Free memory of removed node
        free(temp);
    }
}

// Function to display stack elements
void display(){
    struct node *temp = top;

    // Check if stack is empty
    if(temp == NULL){
        printf("Stack is empty\n");
    }
    else{
        // Traverse and print all elements
        while(temp != NULL){
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main(){

    // Push elements into stack
    push(10);
    push(20);
    push(30);
    push(40);

    // Display stack
    display();

    // Pop one element
    pop();

    // Display stack again
    display();

    return 0;
}