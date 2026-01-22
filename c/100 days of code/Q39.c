#include<stdio.h>
main(){
int num, digit, product = 1;
int hasOdd = 0;
  
printf("Enter the number: ");
scanf("%d", &num);

while (num > 0) {
digit = num % 10;
if (digit % 2 != 0) { 
product *= digit;
hasOdd = 1;
}
num /= 10;
}

printf("%d\n", product);

return 0;
}