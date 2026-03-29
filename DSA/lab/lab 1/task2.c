#include<stdio.h>
int sumofnatural(int n){
int sum=0;
for(int i=1;i<=n;i++)
sum+=i;

return sum;
}
main(){
    int n;
    printf("enter the number \n");
    scanf("%d",&n);

    printf("%d %d\n",n,sumofnatural(n));
    return 0;
}
