#include <stdio.h>
int main() {
int m, n;
printf("Enter number of rows and columns: ");
scanf("%d %d", &m, &n);

int matrix[m][n];
int sum = 0;
printf("Enter the matrix elements:\n");
for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        scanf("%d", &matrix[i][j]);

if(i == j)  
    sum += matrix[i][j];
}
}

 printf("Sum of primary diagonal elements = %d", sum);

return 0;
}