#include<stdio.h>
main() {
int i,num1,num2,j;
printf("Enter the number of elements you want in your array 1 : ");
scanf("%d",&num1);
int arr1[num1+1];
for(i=0;i<num1;++i){
printf("Enter the number : ");
scanf("%d",&arr1[i]);
}
printf("Enter the number of elements you want in your array 2 : ");
scanf("%d",&num2);
int arr2[num2+1];
for(i=0;i<num2;++i){
printf("Enter the number : ");
scanf("%d",&arr2[i]);
}
j=num1+num2;
int arr3[j+1];
for(i=0;i<num1;++i){
arr3[i]=arr1[i];
}
for(i=num1;i<j;++i){
arr3[i]=arr2[i-num1];
}
printf("\nThe new array 3 is : ");
for(i=0;i<j;++i){
printf("%d ",arr3[i]);
}
return 0;
}