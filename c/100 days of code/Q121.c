#include<stdio.h>
main() {
FILE *file;
char name[50];
int age;
file = fopen("info.txt", "w");

if (file == NULL) {
printf("Error! Could not create file.\n");
return 1;
}

printf("Enter your name: ");
scanf("%s", name);
printf("Enter your age: ");
scanf("%d", &age);

fprintf(file, "Name: %s\nAge: %d\n", name, age);

fclose(file);

printf("File created successfully! Data written to info.txt\n");

return 0;
}