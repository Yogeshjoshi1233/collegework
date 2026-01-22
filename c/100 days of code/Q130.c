#include<stdio.h>
main() {
FILE *fp;
char name[50];
int roll, marks;
int n, i;

printf("How many student records do you want to enter? ");
scanf("%d", &n);

fp = fopen("students.txt", "w");
if (fp == NULL) {
printf("Error opening file!\n");
return 1;
}
for (i = 0; i < n; i++) {
printf("\nEnter Name: ");
scanf("%s", name);

printf("Enter Roll Number: ");
scanf("%d", &roll);

printf("Enter Marks: ");
scanf("%d", &marks);

fprintf(fp, "%s %d %d\n", name, roll, marks);
}

fclose(fp);

fp = fopen("students.txt", "r");
if (fp == NULL) {
printf("Error opening file!\n");
return 1;
}

printf(" Student Records \n");

while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
}

fclose(fp);

return 0;
}