#include <stdio.h>

int main() {
    int LA[] = {1, 3, 5, 7, 8};
    int n = 5;
    int i;

    printf("Displaying array:\n");
    for(i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    return 0;
}