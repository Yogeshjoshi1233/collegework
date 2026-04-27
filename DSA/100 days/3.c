#include <stdio.h>

int main() {
    int n, k;

    // Input size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key
    scanf("%d", &k);

    int found = -1;
    int comparisons = 0;

    // Linear Search
    for(int i = 0; i < n; i++) {
        comparisons++;  // count every comparison

        if(arr[i] == k) {
            found = i;
            break;  // stop once found
        }
    }

    // Output result
    if(found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}