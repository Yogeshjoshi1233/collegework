#include<stdio.h>
main(){
int num1, num2, lcm, max;

printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);

max = (num1 > num2) ? num1 : num2;

for(lcm = max; ; lcm++) {
if(lcm % num1 == 0 && lcm % num2 == 0) {
printf("LCM of %d and %d is %d\n", num1, num2, lcm);
break; 
}
}

return 0;
}