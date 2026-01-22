#include<stdio.h>
main(){
{
int x=10;
printf("inside block A, x=%d\n",x);
}
int y=20;
{
printf("inside block b, y=%d\n",y);
int v=30;
printf("inside block b, v=%d\n",v);

}
return 0;
}