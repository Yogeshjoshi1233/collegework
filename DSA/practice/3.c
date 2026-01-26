#include<stdio.h>
int main(){
int x=10,y=5;
printf("sum :%d \n",x+y);  //artimetic operator
printf("subtraction : %d \n", x-y);  //artimetic operator
printf("multipication :%d \n",x*y);  //artimetic operator
printf("division: %d \n",x/y);  //artimetic operator

printf("x > y : %d \n", x>y); //relational operator
printf("x < y :%d \n",x<y);  //relational operator

printf(" x && y : %d \n",x && y); //logiacal operator
printf("x || y : %d \n", x||y);  //logical operator

x+=10;
printf("the value of x after x+= 5 : %d \n",x); //assigment operator

++x;
printf("the value of x after ++x : %d \n",x);  //increment operator

printf("BITWISE : %d \n",x&y); //Bitwise 

printf("ternary operator : %d\n",(x >y) ? x : y);  //ternary operator

return 0;
}