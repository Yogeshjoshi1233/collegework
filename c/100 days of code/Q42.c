#include<stdio.h>
main(){
int num,counter,sum=0;
printf("Enter the number :  ");
scanf("%d",&num);
for(counter=1;counter<=num/2;++counter){
if(num%counter==0){
sum+=counter;
}
}
    
if(sum==num){
printf("%d is a perfect number",num);
}
else
printf("Not a perfect number ");
return 0;
}