#include<stdio.h>
main() {
int n;
printf("Enter the size of the array: ");
scanf("%d", &n);

int arr[n], sum = 0;
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
sum += arr[i];
}

int expected_sum = n * (n + 1) / 2; 
printf("%d is the missing number\n", expected_sum - sum);

return 0;
}