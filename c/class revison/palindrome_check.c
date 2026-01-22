#include<stdio.h>
reverseNumber(int n, int rev) {
if (n == 0)
return rev; 
else
return reverseNumber(n / 10, rev * 10 + n % 10); 
}

int main() {
int num, reversed;

printf("Enter a number: ");
scanf("%d", &num);

int original = num; 
reversed = reverseNumber(num, 0);

if (original == reversed)
printf("%d is a palindrome number.\n", original);
else
printf("%d is not a palindrome number.\n", original);

return 0;
}