#include<stdio.h>
main() {
int num;
printf("Enter the size of the array: ");
scanf("%d", &num);

int arr[num];
for (int i = 0; i < num; i++) {
printf("Enter the number: ");
scanf("%d", &arr[i]);
}

int subarr_size;
printf("Enter the size of the subarray: ");
scanf("%d", &subarr_size);

int arr2[num - subarr_size + 1];

for (int i = 0; i <= num - subarr_size; i++) {
    int max = arr[i];
for (int j = i; j < i + subarr_size; j++) {
if (arr[j] > max) {
 max = arr[j];
}
}
arr2[i] = max;
}

printf("Maximums of each subarray: ");
for (int i = 0; i <= num - subarr_size; i++) {
    printf("%d ", arr2[i]);
}
printf("\n");

return 0;
}