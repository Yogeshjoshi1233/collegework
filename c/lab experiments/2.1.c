#include<stdio.h>
main(){
int w,l,area,peri;
printf("enter a number : \n");
scanf("%d",&l);
printf("enter a  number : \n");
scanf("%d",&w);

area=l*w;
peri=2*(l+w);

printf("the area of rectangle is %d\n",area);
printf("the peri of rectangle is %d\n",peri);

return 0;
}