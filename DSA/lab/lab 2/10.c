#include<stdio.h>
main(){
    int LA[]={1,3,5};
    int n=3;
    int i;
    printf("the original array elements are :\n");
    for(i=0;i<n;i++)
    printf("LA[%d]=%d\n",i,LA[i]);
    for(i=0;i<n;i++){
        LA[i]=LA[i+1];
        n=n-1;
    }
    printf("the array elements after deletion:\n");
    for(i=0;i<n;i++)
    printf("LA[%d]=%d\n",i,LA[i]);
}
