#include <stdio.h>
char board[3][3]; // 2-d array game board 

//function to intialize board 
void initializeBoard() {
int num = 1;
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
board[i][j] = num + '0';  
num++;
}
}
}

//function to print the board
void printBoard() {
printf("\n");
for (int i = 0; i < 3; i++) {
printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
if (i < 2) printf("\n---|---|---\n");
}
printf("\n\n");
}

//check if player has won
int checkWin() {

for (int i = 0; i < 3; i++)
if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
return 1;

for (int j = 0; j < 3; j++)
if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
return 1;


if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
return 1;

if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
return 1;

return 0; 
}

//check if the board is full
int isDraw() {
for (int i = 0; i < 3; i++)
for (int j = 0; j < 3; j++)
if (board[i][j] >= '1' && board[i][j] <= '9')
return 0; //still empty slots

return 1;  //no empty slort=draw
}

int main() {
int choice, row, col;
int player = 1; 
char mark;      

initializeBoard();
while (1) {
printBoard();

//decide mark on based player
mark = (player == 1) ? 'X' : 'O';

printf("Player %d (%c), choose a cell (1-9): ", player, mark);
scanf("%d", &choice);

if (choice < 1 || choice > 9) {
printf("Invalid input! Try again.\n");
 continue;
}


row = (choice - 1) / 3;
col = (choice - 1) % 3;


if (board[row][col] == choice + '0') {
board[row][col] = mark;  
} else {
printf("Cell is already taken! Try again.\n");
continue;
}

//check winner
if (checkWin()) {
printBoard();
printf("Player %d (%c) WINS!\n", player, mark);
break;
}

//check draw
if (isDraw()) {
printBoard();
printf("It's a DRAW!\n");
break;
}

// switch player
player = (player == 1) ? 2 : 1;
}

return 0;
}