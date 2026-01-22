#include<stdio.h>
main() {
int n, i;
    
printf("Enter size of array: ");
scanf("%d", &n);

int arr[n];

printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

int xorAll = 0;

for (i = 0; i < n; i++) {
xorAll ^= arr[i];  
if (i != n - 1)
xorAll ^= (i + 1);  
}

printf("Repeated element is: %d\n", xorAll);

return 0;
}