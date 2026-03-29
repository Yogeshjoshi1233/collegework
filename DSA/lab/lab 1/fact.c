#include<stdio.h>
int factorial(int n){
    int result=1;
    for(int i=1;i<=n;i++)
    result *=i;

    return result;
}
main(){
int fact;
printf("enter a number :\n");
scanf("%d",&fact);

printf("%d\n",factorial(fact));
    return 0;
}