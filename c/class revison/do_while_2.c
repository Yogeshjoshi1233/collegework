#include<stdio.h>
main(){
int num;
int positiveCount = 0;
int negativeCount = 0;
int zeroCount = 0;

printf("Enter numbers (enter -99 to stop):\n");

do {
printf("Enter a number: ");
scanf("%d", &num);

if (num == -99) {
break; 
}

if (num > 0) {
positiveCount++;
} else if (num < 0) {
negativeCount++;
} else {
zeroCount++;
}
} while (1); 

printf("\n--- Results ---\n");
printf("Positive numbers: %d\n", positiveCount);
printf("Negative numbers: %d\n", negativeCount);
printf("Zeroes: %d\n", zeroCount);


return 0;
}