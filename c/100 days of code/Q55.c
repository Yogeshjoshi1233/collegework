#include<stdio.h>
int prime(int n);

int main() {
int num,counter;

printf("Enter the Number: ");
scanf("%d",&num);

for(counter=num;counter>=2;--counter){
if(prime(counter)){
printf("%d ",counter);
}
}
return 0;
}

int prime(int n) {
if (n < 2) return 0;
for (int j = 2; j <= n/2; ++j) {
if (n % j == 0)
return 0;
}
return 1;
}