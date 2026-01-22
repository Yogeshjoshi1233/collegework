#include<stdio.h>
main(){
int totalsec,hours,min,sec;
printf("enter time in sec : ");
scanf("%d",&totalsec);
hours=totalsec/3600;
min=(totalsec%3600)/60;
sec=totalsec%60;
printf("hours=%d,min=%d,sec=%d",hours,min,sec);


return 0;
}