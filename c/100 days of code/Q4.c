#include<stdio.h>
main(){
float PI=3.14,radius,area,circum;
printf("enter the radius of the circle : ");
scanf("%f",&radius);

area=PI*radius*radius;
circum=2*PI*radius;

printf("the area of the circle is %f\n",area);
printf("the circumference of the circle is %f\n",circum);

return 0;
}