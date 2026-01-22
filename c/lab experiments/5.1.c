#include<stdio.h>
main(){
int num,i;
printf("enter the number of elements : ");
scanf("%d",&num);
int arr[num];
printf("enter %d integers:\n",num);
for(i=0;i<num;i++){
scanf("%d",&arr[i]);
}
int largest = arr[0], secondlargest= -1000000;
for(i=1;i<num;i++){
if(arr[i]>largest){
secondlargest = largest;
largest = arr[i];

}else if (arr[i]>
secondlargest && arr[i] != largest) {
secondlargest = arr[i];
}
}
printf("second largest number : %d\n",secondlargest);
return 0;
}