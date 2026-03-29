#include<stdio.h>
int main(){
int c[5]={1,2,3,4,5};
int *ptr1=&c[2];
int *ptr2=&c[3];

printf("address of ptr1: %p\n ",ptr1);
printf("address of ptr1: %p\n",ptr2);

return 0;
}