#include<stdio.h>
main(){
int  arr[5]={10 ,20 ,30 ,40};
printf("%d %d ",arr[1],arr[2]);

arr[2]=35;
printf("updated array (arr[2]):%d\n",arr[2]);
return 0;
}
