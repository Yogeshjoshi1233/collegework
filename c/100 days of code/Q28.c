#include<stdio.h>
main(){
int n, i;
long long product = 1; 
int hasEven = 0;        

printf("Enter n: ");
scanf("%d", &n);

for (i = 2; i <= n; i += 2) {
product *= i;
hasEven = 1;
}

if (hasEven)
printf("%lld\n", product);
else
printf("No even numbers in the range.\n");

return 0;
}
