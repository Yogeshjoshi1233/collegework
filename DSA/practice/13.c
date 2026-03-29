#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front =-1,rear=-1;
//enqueue
void enqueue(int x){
    if(rear==SIZE-1){
        printf("overflow\n");
    }
    else{
        if(front==-1)front=0;
        queue[++rear]=x;
        printf("enqueue:%d",x);
    }
}
void dequeue(){
    if(front==-1||front>rear){
        printf("underflow\n");
    }
    else{
printf("%d removed \n",queue[front++]);
    }
}
void display(){
    if(front==-1||front>rear){
        printf("queue is empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("QUEUE:%d",queue[i]);
            printf("\n");
        }
    }
}
int main(){
    int choice,x;
    while(1){

        printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.Exit\n");
        scanf("%d",&choice);
    

    switch(choice){
        case 1 :
        printf("enter the value:");
        scanf("%d",&x);
        enqueue(x);
        break;
        case 2 :
        dequeue();
        break;
        case 3 :
         display();
         break;
        case 4 :
         return 0;
         default :
        printf("invalid choice\n");
    }
    }

}