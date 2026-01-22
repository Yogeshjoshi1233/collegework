#include<stdio.h>
main(){
int num;
int positive_count = 0;
int negative_count = 0;
int zero_count = 0;
char choice;

for (;;) { 
printf("Enter a number: ");
scanf("%d", &num);

if (num > 0) {
positive_count++;
} else if (num < 0) {
negative_count++;
} else {
zero_count++;
}

printf("Do you want to enter another number? (y/n): ");
scanf(" %c", &choice); 

if (choice == 'n' || choice == 'N') {
break; 
}
}

printf("\n--- Results ---\n");
printf("Positive numbers: %d\n", positive_count);
printf("Negative numbers: %d\n", negative_count);
printf("Zeroes: %d\n", zero_count);

return 0;
}