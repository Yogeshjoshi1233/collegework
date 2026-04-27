#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int x) {
    if(top == MAX - 1) {
        // Stack overflow (optional to handle)
        return;
    }
    stack[++top] = x;
}

// Pop function
void pop() {
    if(top == -1) {
        // Stack underflow (optional)
        return;
    }
    top--;
}

int main() {
    int n, m, x;

    // Input number of elements
    scanf("%d", &n);

    // Push elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        push(x);
    }

    // Number of pops
    scanf("%d", &m);

    // Perform pop m times
    for(int i = 0; i < m; i++) {
        pop();
    }

    // Print stack from top to bottom
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    return 0;
}