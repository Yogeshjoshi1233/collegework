#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int x){
    if((rear+1)%SIZE==front){
        printf("queue overflow");
    }
    else{
        if(front==-1)front=0;
        rear=(rear+1)%SIZE;
        queue[rear]=x;
    }
}

