#include<stdio.h>
main() {
int counter,num,sum=0,neg=0,pos=0,zero=0;
printf("Enter the number of elements you want in your array : ");
scanf("%d",&num);
int arr[num+1];
for(counter=0;counter<num;++counter){
printf("Enter the number : ");
scanf("%d",&arr[counter]);
}
puts("");
for(counter=0;counter<num;++counter){
if(arr[counter]==0){
++zero;
}
else if(arr[counter]<0){
++neg;
}
else{
++pos;
}
}
printf("The number of positive digits are %d ,the negative are %d and the zero are  %d",pos,neg,zero);
return 0;
}