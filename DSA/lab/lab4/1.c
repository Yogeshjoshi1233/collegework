#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top=-1;

void push(int value){
    if (top==SIZE-1){
        printf("stack overflow \n");
    }
    else{
        top++;
        stack[top]=value;
        printf("%d pushed into stack\n",value);
    }
}
//pop operation
void pop(){
    if (top==-1){
        printf("stack underflow");
    }
    else{
        printf("%d popped from stack\n",stack[top]);
        top--;

    }
}
//display stack
void display(){
    if (top==-1){
        printf("stack is empty");

    }
    else{
        for(int i=top;i<=0;i--)
        printf("%d\n",stack[i]);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    display();
    pop();
    display();
    return 0;
}