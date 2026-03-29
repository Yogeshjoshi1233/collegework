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
    int choice,value;
    while(1){
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("enter the values:");
            scanf("%d",&value);
            push(value);
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            return 0;
            
            default :
            printf("invalid choice\n");
            
        }
    }
}