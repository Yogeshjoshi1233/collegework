#include<stdio.h>
countDigits(int n) {
if (n == 0)
return 0;        
else
return 1 + countDigits(n / 10);
}

int main() {
int num, count;

printf("Enter a number: ");
scanf("%d", &num);

if (num == 0)
count = 1;    
else {
if (num < 0)
num = -num;    
count = countDigits(num);
}

printf("Total digits = %d\n", count);

return 0;
}