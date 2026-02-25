#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int compare(const void* a, const void* b) {
return (*(int*)a - *(int*)b);
}
int main() {
int n;

printf("Enter the size of the array: ");
scanf("%d", &n);

if(n < 2) {
    printf("At least two elements are required.\n");
return 0;
}

int arr[n];

printf("Enter %d integers:\n", n);
for(int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

qsort(arr, n, sizeof(int), compare);

int left = 0, right = n - 1;
int minSum = INT_MAX;
int num1 = arr[0], num2 = arr[1];

while(left < right) {
    int sum = arr[left] + arr[right];

if(abs(sum) < abs(minSum)) {
minSum = sum;
    num1 = arr[left];
    num2 = arr[right];
}

if(sum < 0)
left++;
else
right--;
}

printf("Pair whose sum is closest to zero: %d %d\n", num1, num2);

return 0;
}