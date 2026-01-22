#include<stdio.h>
reverseNumber(int num, int rev) {
if (num == 0)
return rev;   
else
return reverseNumber(num / 10, rev * 10 + num % 10); 
}

int main() {
int num, result;

printf("Enter a number: ");
scanf("%d", &num);

result = reverseNumber(num, 0);

printf("Reversed Number: %d\n", result);

return 0;
}