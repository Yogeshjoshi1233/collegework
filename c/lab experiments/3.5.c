#include<stdio.h>
main(){
float L1,w1,p1;
float L2,w2,p2;
float L3,w3,p3;
float maxp;
int rectnumber;

printf("enter the length and breadth for rectangle 1 : \n");
scanf("%f %f",&L1,&w1);
p1=2*(L1+w1);

printf("enter the length and breadth for rectangle 2 : \n");
scanf("%f %f",&L2,&w2);
p2=2*(L2+w2);

printf("enter the length and breadth for rectangle 3 : \n");
scanf("%f %f",&L3,&w3);
p3=2*(L3+w3);

if (p1>p2 && p1>p3){
maxp=p1;
rectnumber=1;
}
else if (p2>p1 && p1>p3){
maxp=p2;
rectnumber=2;
}
else {
maxp=p3;
rectnumber=3;
}

printf("\n rectangle %d has the max perimeter= %f\n",rectnumber,maxp);

return 0;
}