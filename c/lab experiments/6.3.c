#include<stdio.h>
fibo(int a){
if (a == 0)
return 0;  
else if (a == 1)
return 1;  
else
return fibo(a - 1) + fibo(a - 2);    
}
int main(){
int a,i;
printf("enter the numbers : ");
scanf("%d",&a);
printf("the fibonacci series : ");
for(i=0;i<a;i++){
printf("%d ",fibo(i));
}
return 0;
}