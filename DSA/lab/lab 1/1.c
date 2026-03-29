#include<stdio.h>
main(){
    int num;
    printf("enter the number :\n");
    scanf("%d",&num);
    int input;
    int sum=0,i;
    for(i=1;i<=num;i++){
        scanf("%d",&input);
        sum+=input;
    }
    printf("sum is %d average is %d\n",sum,sum/num);
    return 0;
}