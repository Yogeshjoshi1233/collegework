#include<stdio.h>
struct S{
    int i;
    float f;
};
union U{
    int i;
    float f;
};
int main(){
    printf("Size of the structure :\n",sizeof(struct S));
    printf("size of union :\n",sizeof(union U));
    return 0;
}