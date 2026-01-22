#include<stdio.h>
main(){
float population = 100000; 
int year;

printf("Yearly population growth (10%% increase per year):\n");

for (year = 1; year <= 10; year++) {
population = population + (population * 0.10); // increase by 10%
printf("End of year %d: %.0f\n", year, population);
}

return 0;
}