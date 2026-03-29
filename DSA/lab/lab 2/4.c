#include<stdio.h>
struct student{
    int roll;
    float marks;
};
main(){
    struct student s[3];
    int i;
    for(i=0;i<3;i++){
        printf("enter the roll no and marks :\n");
        scanf("%d %f ",&s[i].roll,&s[i].marks);
    }
    printf("student details:\n");
    for(i=0;i<3;i++){
        printf("roll:%d,marks:%.2f\n",s[i].roll,s[i].marks);

    }
    return 0;
}