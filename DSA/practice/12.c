#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX 50
int stack[MAX],topA=-1;
void push(int x){
    if(topA==MAX-1){
        printf("overflow");
    }
    else{
        stack[++topA]=x;
        printf("pushed:%d\n",stack[topA]);
    }
}
void pop(){
    if(topA==-1){
        printf("underflow");
}
    else{
        print("popped:%d",stack[topA]);
        topA--;
    }
}
void peek(){
    if(topA==-1){
        printf("empty satck");
}
else{
    printf("top:%d",stack[topA]);
}
}
void display(){
    if(topA==-1){
        print("empty stack");
    }
    else{
        printf("stack:");
        for(int i=topA;i>=0;i--){
            printf("%d",stack[i]);
            print("\n");
        }
    }
}
//for linked list
struct node{
    int data;
    struct node* next;
};
struct node* topL=NULL;
void pushL(int x){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=x;
    n->next=topL;
    topL=n;
    printf("pushed:%d",x);
}
void popL(){
    if(!topL){
        printf("underflow\n");
        return;
    }
    else{
struct node* temp=topL;
printf("poped:%d\n",temp->data);
topL=topL->data;
free(temp);
    }
}
void display(){
    if(!topL){
        printf("stack is empty\n");
    }
    else{
        struct node* t=topL;
        printf("stack:");
        while(t){
            printf("%d",t->data);
            t->next;
            }
            printf("\n");
    }
}
int precedence(char c){
    if(c=='+'||c=='-')return 1;
    if(c=='*'||c=='/')return 2;
    return 0;
}
//module 1
void infixtopostfix(){
      
}