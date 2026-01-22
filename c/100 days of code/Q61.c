#include<stdio.h>
main() {
int counter,num,posi,tofind;
printf("Enter the number of elements you want in your array : ");
scanf("%d",&num);
int arr[num+1];
for(counter=0;counter<num;++counter){
printf("Enter the number : ");
scanf("%d",&arr[counter]);
}
printf("\nEnter the number to find : ");
scanf("%d",&tofind);
for(counter=0;counter<num;++counter){
if(arr[counter]==tofind){
printf("Found at index  : %d \n",counter);
}
}
return 0;
}