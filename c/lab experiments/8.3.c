#include<stdio.h>
main() {
int a[3];
float b[3];
char c[3];

printf("Enter 3 integers:\n");
for(int i = 0; i < 3; i++) {
scanf("%d", &a[i]);
}

printf("\nEnter 3 floats:\n");
for(int i = 0; i < 3; i++) {
scanf("%f", &b[i]);
}

printf("\nEnter 3 characters:\n");
for(int i = 0; i < 3; i++) {
scanf(" %c", &c[i]);   
}

int *pInt = a;
float *pFloat = b;
char *pChar = c;

printf("pInt address  : %p, value = %d\n", pInt, *pInt);
printf("pFloat address: %p, value = %.2f\n", pFloat, *pFloat);
printf("pChar address : %p, value = %c\n", pChar, *pChar);

pInt++;
pFloat++;
pChar++;

printf("pInt address  : %p, value = %d\n", pInt, *pInt);
printf("pFloat address: %p, value = %.2f\n", pFloat, *pFloat);
printf("pChar address : %p, value = %c\n", pChar, *pChar);

pInt--;
pFloat--;
pChar--;

printf("pInt address  : %p, value = %d\n", pInt, *pInt);
printf("pFloat address: %p, value = %.2f\n", pFloat, *pFloat);
printf("pChar address : %p, value = %c\n", pChar, *pChar);

    return 0;
}