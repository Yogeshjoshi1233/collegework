#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int dice1, dice2, total;
char ch;
srand(time(0));
printf(" Dice Rolling Game \n");
printf("Press ENTER to roll the dice...\n");
getchar();
dice1 = (rand() % 6) + 1;
dice2 = (rand() % 6) + 1;
total = dice1 + dice2;
printf("\nYou rolled:\n");
printf("Dice 1 = %d\n", dice1);
printf("Dice 2 = %d\n", dice2);
printf("Total  = %d\n", total);

if (total >= 7) {
printf("\n You win!\n");
} else {
printf("\n You lose!\n");
}

return 0;
}
