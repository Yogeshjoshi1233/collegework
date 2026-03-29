#include <stdio.h>

int main() {
    int LA[] = {1, 3, 5, 7, 8};
    int n = 5;
    int k = 3;
    int item = 10;
    int i;

    printf("Original array:\n");
    for(i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    LA[k - 1] = item;

    printf("Array after update:\n");
    for(i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    return 0;
}