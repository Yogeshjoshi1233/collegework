#include<stdio.h>
struct student{
    int roll;
    float marks;
};
main(){
    struct student s1;
    s1.roll=101;
    s1.marks=85.5;

    printf("roll no:%d \n",s1.roll);
    printf("marks :%.2f\n",s1.marks);

    return 0;
}