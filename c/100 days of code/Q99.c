#include<stdio.h>
main() {
int day, year;
char month[3];

printf("Enter date in dd/04/yyyy format: ");
scanf("%d/%3s/%d", &day, month, &year); 

if (month[0] == '0' && month[1] == '4')
printf("Converted date: %02d-Apr-%d\n", day, year);
else
printf("Invalid month! Only 04 is supported in this program.\n");

return 0;
}