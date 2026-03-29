#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int *arr;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed \n");
    return 1;
    }
printf("enter the elements :\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("elements are :\n");
for(i=0;i<n;i++){
    printf("%d ", arr[i]);
}
free(arr);
return 0;
}

