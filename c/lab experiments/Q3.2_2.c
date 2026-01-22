#include<stdio.h>
main(){
int num; 
int i;  

printf("Enter an integer to display its multiplication table: ");
scanf("%d", &num);

printf("Multiplication Table for %d:\n", num);

for (i = 1; i <= 10; i++) {
    
printf("%d * %d = %d\n", num, i, num * i);
}

return 0;
}