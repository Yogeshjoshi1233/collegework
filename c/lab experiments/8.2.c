#include<stdio.h>
main() {
int a[3] = {10, 20, 30};
float b[3] = {1.1, 2.2, 3.3};
char c[3] = {'A', 'B', 'C'};

int *pInt = a; 
float *pFloat = b;  
char *pChar = c;    

printf("pInt address  : %p, value = %d\n", pInt, *pInt);
printf("pFloat address: %p, value = %.1f\n", pFloat, *pFloat);
printf("pChar address : %p, value = %c\n\n", pChar, *pChar);

pInt++;
pFloat++;
pChar++;

   
printf("pInt address  : %p, value = %d\n", pInt, *pInt);
printf("pFloat address: %p, value = %.1f\n", pFloat, *pFloat);
printf("pChar address : %p, value = %c\n\n", pChar, *pChar);

pInt--;
pFloat--;
pChar--;

printf("pInt address  : %p, value = %d\n", pInt, *pInt);
printf("pFloat address: %p, value = %.1f\n", pFloat, *pFloat);
printf("pChar address : %p, value = %c\n", pChar, *pChar);

    return 0;
}