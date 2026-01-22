#include<stdio.h>
main(){
float principal,rate,time,si,cp,amount;
printf("enter the principal amount : ");
scanf("%f",&principal);
printf("enter the rate of interest : ");
scanf("%f",&rate);
printf("enter time(years) : ");
scanf("%f",&time);

si=principal*rate*time/100;
amount=principal*pow((1+rate/100),time);
cp=amount-principal;

printf("simple interest = %f\n",si);
printf("compound interest = %f\n",cp);

return 0;
}