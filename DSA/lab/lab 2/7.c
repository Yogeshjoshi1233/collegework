#include<stdio.h>
union data{
    int i;
    float f;

};
int main(){
    union data d;
    d.i=10;
    printf("i=%d\n",d.i);
    d.f=3.14;
    printf("F= %.2f\n",d.f)

    return 0;
}