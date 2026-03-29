#include<stdio.h>
main(){
int n,i,arr[100];
int largest,secondlargest;

printf("enter the number of elemnets :\n");
scanf("%d",&n);
if(n<2){
    printf("invalid input \n");

}
else {
    printf("enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    secondlargest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
            
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    printf("largest element is %d\n",largest);
    printf("second largest element is %d\n",secondlargest);
}
return 0;
}