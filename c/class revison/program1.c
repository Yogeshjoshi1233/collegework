#include <stdio.h>
main() {
    int choice;
    int i;

    printf("Enter a choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
    printf("You chose 1. Executing a for loop:\n");
    for (i = 0; i < 3; i++) {
    printf("  Loop iteration %d\n", i);
    }
    break; 
    case 2:
    printf("You chose 2. This case has no loop.\n");
    break;
    case 3:
    printf("You chose 3. Executing another for loop:\n");
    for (i = 5; i > 2; i--) {
    printf("  Countdown: %d\n", i);
    }
    break;
    default:
    printf("Invalid choice.\n");
    break;
    }
return 0;
}
