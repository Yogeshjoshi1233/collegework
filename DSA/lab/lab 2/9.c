#include<stdio.h>
main(){
    int LA[3]={},i;
    printf("array before insertion :\n");
    for (i=0;i<3;i++);
    printf("LA[%d]=%d\n",i,LA[i]);
    printf("inserting elements \n");
    printf("the array after insertion :\n");
    for(i=0;i<3;i++){
        LA[i]=i+2;
        printf("LA[%d]=%d\n",i,LA[i]);
    }
    return 0;
}
