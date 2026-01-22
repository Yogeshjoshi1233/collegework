#include<stdio.h>
main(){
int i, j, num;

for(i = 0; i < 5; i++) {
num = 1;   
for(j = 0; j <= i; j++) {
printf("%d ", num);
num = num * (i - j) / (j + 1);  
}
printf("\n");
}

return 0;
}