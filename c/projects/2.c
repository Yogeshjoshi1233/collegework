#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int userChoice, coin;
char playAgain;
srand(time(0));
do {
printf("\n Coin Toss Game \n");
printf("Choose:\n");
printf("1 = Heads\n");
printf("2 = Tails\n");
printf("Enter your choice: ");
scanf("%d", &userChoice);

coin = (rand() % 2) + 1;
if (coin == 1)
printf("\nCoin landed on: Heads\n");
else
printf("\nCoin landed on: Tails\n");

if (userChoice == coin)
    printf(" You win!\n");
else
printf(" You lose!\n");
printf("\nDo you want to play again? (y/n): ");
getchar();           
playAgain = getchar();  

} while (playAgain == 'y' || playAgain == 'Y');

printf("\nThanks for playing! \n");

return 0;
}