#include<stdio.h>
main() {
int a = 10;
float b = 3.14;
char c= 'x';

int *pInt = &a;    
float *pFloat = &b;  
char *pChar = &c;

printf("Value of a (int)      : %d\n", a);
printf("Value of b (float)    : %.2f\n", b);
printf("Value of c (char)     : %c\n\n", c);

printf("Address stored in pInt    : %p\n", pInt);
printf("Address stored in pFloat  : %p\n", pFloat);
printf("Address stored in pChar   : %p\n\n", pChar);

printf("Value pointed by pInt      : %d\n", *pInt);
printf("Value pointed by pFloat    : %.2f\n", *pFloat);
printf("Value pointed by pChar     : %c\n", *pChar);


return 0;
}