#include<stdio.h>
main(){
float L,w;
float area,peri;
printf("enter the length : ");
scanf("%f",&L);
printf("enter the width : ");
scanf("%f",&w);

area=L*w;
peri=2*(L+w);

printf("the area of rectangle is %f\n",area);
printf("the perimeter of rectangle is %f\n",peri);

return 0;
}