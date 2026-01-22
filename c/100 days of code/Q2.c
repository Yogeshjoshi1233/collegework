#include<stdio.h>
main(){
int num1,num2;
int sum,sub,multi,div;
printf("enter the first number : ");
scanf("%d",&num1);
printf("enter the second number : ");
scanf("%d",&num2);

sum=num1+num2;
sub=num1-num2;
multi=num1*num2;
div=num1/num2;

printf("the sum is %d\n",sum);
printf("the sub is %d\n",sub);
printf("the multi is %d\n",multi);
printf("the div is %d\n",div);

return 0;
}