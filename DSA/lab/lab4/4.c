#include <stdio.h>

#define MAX 100   // Maximum size of the stack

// Declare stack array and top pointer
int stack[MAX];
int top = -1;     // Initialize top as -1 (stack is empty)

// Function to push an element onto the stack
void push(int value) {
    top++;                // Increment top
    stack[top] = value;   // Insert value at top position
}

// Function to pop an element from the stack
int pop() {
    return stack[top--];  // Return top element and decrement top
}

int main() {
    // Original array
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Step 1: Push all array elements into the stack
    for(int i = 0; i < n; i++) {
        push(arr[i]);     // Push each element into stack
    }

    // Step 2: Pop elements from stack and store back into array
    // This reverses the array because stack follows LIFO (Last In First Out)
    for(int i = 0; i < n; i++) {
        arr[i] = pop();   // Pop elements and assign to array
    }

    // Step 3: Print the reversed array
    printf("Reversed array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print each element
    }

    return 0;
}