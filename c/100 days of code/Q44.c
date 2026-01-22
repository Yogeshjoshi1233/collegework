#include<stdio.h>
main(){
float num,sum=1,i,temp,rem;
printf("Enter the number of terms :");
scanf("%f",&num);
for(i=1;i<num+1;++i){
sum+=((2*i+1)/(2*i+2));
}
printf("%.2f",sum);
return 0;
}