#include<stdio.h>
main(){
float x1,y1,x2,y2,x3,y3,Slope1,Slope2;
printf("enter coordinates of point 1 (x1,y1) :");
scanf("%f %f",&x1,&y1);
printf("enter the coordinates of second point(x2,y2) :");
scanf("%f %f",&x2,&y2);
printf("enter the coordinates of third point(x3,y3) :");
scanf("%f %f",&x3,&y3);

Slope1 = (y2 - y1) / (x2 - x1);
Slope2 = (y3 - y2) / (x3 - x2);


if(Slope1==Slope2){
printf("the three points fall on the same straight line.\n");
}
else{
printf("the three points fall on different straight line.\n");
}
return 0;
}