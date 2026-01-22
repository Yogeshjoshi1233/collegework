#include<stdio.h>
main() {
int n, i, j;
int arr[100];
int leftSum, rightSum, pivot = -1;

printf("Enter size of array: ");
scanf("%d", &n);

printf("Enter %d elements: ", n);
for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

for (i = 0; i < n; i++) {
    leftSum = 0;
    rightSum = 0;

    for (j = 0; j < i; j++)
    leftSum += arr[j];

for (j = i + 1; j < n; j++)
    rightSum += arr[j];

if (leftSum == rightSum) {
    pivot = i;
     break; 
}
}

printf("Pivot index: %d\n", pivot);

return 0;
}