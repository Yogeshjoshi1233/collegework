#include<stdio.h>
demonstrateStatic() {
    static int callCount = 0; 
    callCount++;
    printf("demonstrateStatic() called %d times.\n", callCount);
}

int main() {
    demonstrateStatic(); 
    demonstrateStatic(); 
    demonstrateStatic(); 
    return 0;
}