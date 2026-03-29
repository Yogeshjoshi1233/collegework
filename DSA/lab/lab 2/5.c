#include <stdio.h>
struct student {
int roll;
char name[50];
float marks;
};
int main() {
int n, i, maxIndex = 0;

printf("Enter number of students: ");
scanf("%d", &n);

struct student s[n];
for(i = 0; i < n; i++) {
printf("\nEnter details of student %d\n", i + 1);

printf("Roll number: ");
scanf("%d", &s[i].roll);

printf("Name: ");
scanf("%s", s[i].name);

printf("Marks: ");
scanf("%f", &s[i].marks);
}
for(i = 1; i < n; i++) {
    if(s[i].marks > s[maxIndex].marks) {
maxIndex = i;
}
}
printf("\nStudent with highest marks:\n");
printf("Roll Number: %d\n", s[maxIndex].roll);
printf("Name: %s\n", s[maxIndex].name);
printf("Marks: %.2f\n", s[maxIndex].marks);

return 0;
}
