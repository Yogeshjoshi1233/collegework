#include<stdio.h>
int main(){

    int x=10;
    (x % 2 == 0) ? printf("even\n") : printf("odd\n");  //ternary operator

    switch(x){   //switch case
    case 1:
    printf("Ten\n");
    break;
    default:
    printf("other number\n");
    }

    if(x==10)  //if else
    printf("the number is 10 \n");
       else 
        printf("the number is not ten\n");
    
        return 0;
}