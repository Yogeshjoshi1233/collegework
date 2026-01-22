#include<stdio.h>
main(){
int num;
printf("Enter the size of the array: ");
scanf("%d",&num);
int arr[num];
for(int i=0;i<num;i++){
    printf("Enter the number: ");
    scanf("%d",&arr[i]);
}
int subarr_size;
printf("Enter the size of the subarray: ");
scanf("%d",&subarr_size);
int max=0;
for(int i=0;i<=num-subarr_size;i++){
    int sum=0;
for(int j=i;j<i+subarr_size;j++){
sum+=arr[j];
if(sum>max){
max=sum;
}
}
}
printf("The maximum sum of subarray of size %d is: %d",subarr_size,max);
return 0;
}
