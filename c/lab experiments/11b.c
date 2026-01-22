#include<stdio.h>
int main(){
    int num = 8; // binary representation of 8 is 00001000
    int leftshift, rightshift;

    leftshift = num << 2;
    rightshift = num >> 2;
    printf("original number : %d\n",num);
    printf("left shift: %d\n",leftshift);
    printf("right shift: %d\n",rightshift);

    return 0;
}