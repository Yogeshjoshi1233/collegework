#include<stdio.h>
main(){
int num, sum = 0;

printf("Enter number: ");
scanf("%d", &num);

while (num > 0) {
sum += num % 10;  
num /= 10;        
}

printf("%d\n", sum);

return 0;
}