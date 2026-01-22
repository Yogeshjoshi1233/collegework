#include<stdio.h>
main(){
int a, b;

printf("Enter number 1 : ");
scanf("%d", &a);

printf("Enter number 2 : ");
scanf("%d", &b);

    while(a != b) {
if(a > b)
    a = a - b;
else
    b = b - a;
}

    printf("%d", a);

return 0;
}