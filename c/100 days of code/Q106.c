#include<stdio.h>
main(){
 int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++) {
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }

    int arr2[num];
    for (int i = 0; i < num; i++) {
        int next_greater = -1;
        for (int j = i + 1; j < num; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }
        arr2[i] = next_greater;  
    }

    printf("The Next Greater Elements are:\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}



