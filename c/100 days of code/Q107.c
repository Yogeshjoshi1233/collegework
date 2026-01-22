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

int pge[num];

for (int i = 0; i < num; i++) {
int previous_greater = -1;
for (int j = i - 1; j >= 0; j--) {
if (arr[j] > arr[i]) {
previous_greater = arr[j];
break;
}
}
pge[i] = previous_greater;
}

printf("The Previous Greater Elements are:\n");
for (int i = 0; i < num; i++) {
    printf("%d", pge[i]);
if (i != num - 1) printf(", ");
}

return 0;
}