#include<stdio.h>
main(){
int month;
printf("enter the month number: ");
scanf("%d",&month);

switch(month){
case 1:
printf("january-31days\n");
break;
case 2:
printf("feburary-28days\n");
break;
case 3:
printf("march-31days\n");
break;
case 4:
printf("april-30days\n");
break;
case 5:
printf("may-31days\n");
break;
case 6:
printf("june-30days\n");	
break;
case 7:
printf("july-31days\n");
break;
case 8:
printf("august-31days\n");
break;
case 9:
printf("september-30days\n");
break;
case 10:
printf("october-31days\n");
break;
case 11:
printf("november-30days\n");
break;
case 12:
printf("december-31days\n");
break;

default:
	printf("invalid month number! please enter a number between 1 and 12\n");
}

return 0;
}