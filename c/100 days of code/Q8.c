#include<stdio.h>
main(){
int n,sum=0;
printf("enter a positive integer :");
scanf("%d",&n);

for(int i=1;i<=n;i++){
sum+=i;
}
printf("the sum of the first %d naturanl number is %d\n",n,sum);

return 0;
}