#include<stdio.h>
main(){
int num1, num2, i = 1, hcf = 1;

printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);

while(i <= num1 && i <= num2) {
if(num1 % i == 0 && num2 % i == 0) {
hcf = i;
}
i++; 
}

printf("HCF of %d and %d is %d\n", num1, num2, hcf);

return 0;
}