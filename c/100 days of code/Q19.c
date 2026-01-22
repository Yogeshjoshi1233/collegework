#include <stdio.h>
main(){
int a, b, c;
printf("Enter three sides of the triangle: ");
scanf("%d %d %d", &a, &b, &c);
    
if ((a + b > c) && (a + c > b) && (b + c > a)) {
printf("\nTriangle is valid.\n");

if (a == b && b == c) {
    printf("It is an Equilateral triangle.\n");
}
else if (a == b || b == c || a == c) {
printf("It is an Isosceles triangle.\n");
}
else {
printf("It is a Scalene triangle.\n");
}
} 
else {
printf("\nTriangle is NOT valid.\n");
}
return 0;
}