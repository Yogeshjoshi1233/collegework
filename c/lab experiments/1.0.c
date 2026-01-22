#include<stdio.h>
main() {
    int n, i, choice, searchID, found;
    int empID[100];         
    float salary[100];     

    printf(" EMPLOYEE MANAGEMENT SYSTEM \n");
    printf("Enter number of employees: ");
    scanf("%d", &n);

   
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &empID[i]);
        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    
    do {
        printf("\n===== MENU =====\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Show Average Salary\n");
        printf("4. Highest & Lowest Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

switch (choice) {
case 1:
printf("\n Employee Details \n");
 printf("ID\tSalary\n");
for (i = 0; i < n; i++) {
printf("%d\t%.2f\n", empID[i], salary[i]);
}
break;

 case 2:
printf("\nEnter Employee ID to search: ");
scanf("%d", &searchID);
found = 0;
for (i = 0; i < n; i++) {
if (empID[i] == searchID) {
printf("Employee Found!\n");
printf("ID: %d\nSalary: %.2f\n", empID[i], salary[i]);
found = 1;
break;
}
    }
    if (!found)
     printf("No employee found with ID %d\n", searchID);
 break;

case 3: {
float total = 0;
    for (i = 0; i < n; i++) {
total += salary[i];
}
printf("Average Salary: %.2f\n", total / n);
     break;
}

case 4: {
float highest = salary[0], lowest = salary[0];
int highID = empID[0], lowID = empID[0];
for (i = 1; i < n; i++) {
    if (salary[i] > highest) {
highest = salary[i];
    highID = empID[i];
}

if (salary[i] < lowest) {
lowest = salary[i];
     lowID = empID[i];
}
}
printf("\nHighest Salary: %.2f (Employee ID: %d)\n", highest, highID);
printf("Lowest Salary: %.2f (Employee ID: %d)\n", lowest, lowID);
     break;
}

case 5:
printf("Exiting program...\n");
break;

default:
    printf("Invalid choice! Try again.\n");
}

    } while (choice != 5);

    return 0;
}