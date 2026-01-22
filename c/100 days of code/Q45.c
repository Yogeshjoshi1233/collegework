#include<stdio.h>
main(){
float num,sum=0,i,temp,rem;
printf("Enter the number of terms :");
scanf("%f",&num);
for(i=1;i<=num;++i){
sum+=((2*i)/(4*i-1));
}
printf("%.2f",sum);
return 0;
}