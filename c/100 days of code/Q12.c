#include<stdio.h>
main(){
int num;
printf("enter an integer: ");
scanf("%d",&num);

if(num>=0){
 if(num==0){
printf("the number is zero\n");
}
else{
printf("the number is positive\n");
}
}
else{
printf("the number is negative\n");
}

return 0;
}