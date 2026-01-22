#include<stdio.h>
main() {
int n,temp;

printf("Enter number of elements: ");
scanf("%d", &n);

 int arr[n];  

 for (int i = 0; i < n; i++) {
 printf("Enter element : ");
 scanf("%d", &arr[i]);
}
int arr1[n],shift;
printf("Enter the position by which you wanna shift the array : ");
scanf("%d",&shift);
for(int i=0;i<n;++i){
if(i<shift){
arr1[i]=arr[n-shift+i];
    }
else{
 arr1[i]=arr[i-shift];
}
}
for (int i = 0; i < n; i++) {
printf("%d ",arr1[i]);
}
return 0;
}