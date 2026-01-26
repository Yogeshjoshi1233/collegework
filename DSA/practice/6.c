#include<stdio.h>
void f(){
    printf("Y\n");
}
void f1(int x){
    printf("%d\n",x);
}
int f3(){
    return 5;
}
int f4(int a,int b){
    return a+b;
}

main(){
f();
f1(10);
printf("%d\n",f3());
printf("%d\n",f4(3,4));

return 0;

}