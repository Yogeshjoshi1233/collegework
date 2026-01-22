#include<stdio.h>
main(){
int num;
int binary[32];  
int i = 0;

printf("Enter the number : ");
scanf("%d", &num);

if (num == 0) {
printf("0");
return 0;
}

while (num > 0) {
binary[i] = num % 2;
num = num / 2;
i++;
}
  for (int j = i - 1; j >= 0; j--) {
printf("%d", binary[j]);
}

return 0;
}