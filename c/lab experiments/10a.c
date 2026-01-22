#include<stdio.h>
struct Node {
int data;
struct Node *next;
};
int main() {
  
struct Node head, second, third;
head.data = 10;
second.data = 20;
third.data = 30;

head.next = &second;
second.next = &third;
third.next = NULL; 

struct Node *temp = &head;

printf("Linked List: ");
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}

printf("\n");
return 0;
}