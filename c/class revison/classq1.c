#include<stdio.h>
main(){
int n, i, num;
char choice;

printf("Do you want to enter elements in the array? (y/n): ");
scanf(" %c", &choice);  

if(choice == 'y' || choice == 'Y') {
printf("Enter number of elements: ");
scanf("%d", &n);

int arr[n];

printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

printf("Enter number to search: ");
scanf("%d", &num);

for(i = 0; i < n; i++) {
if(arr[i] == num) {
printf("Number found at position %d\n", i + 1);
return 0; 
}
}

printf("Number not found\n");
} 
else {
printf("You chose not to enter elements. Program ended.\n");
}

return 0;
}