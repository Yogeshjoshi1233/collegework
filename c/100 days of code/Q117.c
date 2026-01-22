#include<stdio.h>
main(){
int num;
printf("Enter the size of the first array: ");
scanf("%d",&num);
int arr[num];
for(int i=0;i<num;i++){
printf("Enter number %d: ",i+1);
scanf("%d",&arr[i]);
}
int num1;
printf("Enter the size of the second array: ");
scanf("%d",&num1);
int arr1[num1];
for(int i=0;i<num1;i++){
printf("Enter number %d: ",i+1);
scanf("%d",&arr1[i]);
}
int arr3[num+num1];
for(int i=0;i<num;i++){
    arr3[i]=arr[i];
}
for(int i=0;i<num1;i++){
arr3[num+i]=arr1[i];
}
for(int i=0;i<num+num1-1;i++){
    for(int j=0;j<num+num1-i-1;j++){
if(arr3[j]>arr3[j+1]){
int temp=arr3[j];
arr3[j]=arr3[j+1];
arr3[j+1]=temp;
}
}
}

for(int i=0;i<num+num1;i++){
printf("%d ",arr3[i]);
}
return 0;
}