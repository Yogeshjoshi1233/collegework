#include<stdio.h>
main() {
int a, b;

printf("Enter first number: ");
scanf("%d", &a);

printf("Enter second number: ");
scanf("%d", &b);

printf("\n AND (a & b) = %d", a & b);
printf("\n OR  (a | b) = %d", a | b);
printf("\n NOT (~a) = %d", ~a);
printf("\n NOT (~b) = %d\n", ~b);

return 0;
}
