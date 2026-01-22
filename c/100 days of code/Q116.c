#include<stdio.h>
main() {
int num;
printf("Enter the size of the array: ");
scanf("%d", &num);

int arr[num];
for (int i = 0; i < num; i++) {
printf("Enter number %d: ", i + 1);
scanf("%d", &arr[i]);
}

int target;
printf("Enter the target number: ");
scanf("%d", &target);

int found = 0;

for (int i = 0; i < num; i++) {
for (int j = i + 1; j < num; j++) {
if (arr[i] + arr[j] == target) {
printf("Pair found: arr[%d] + arr[%d] = %d\n", i,j, target);
found = 1;
break;
}
}
}

if (!found) {
printf("No pair found that sums to %d\n", target);
}

return 0;
}