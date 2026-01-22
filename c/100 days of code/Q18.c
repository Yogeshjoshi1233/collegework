#include<stdio.h>
main(){
float percent;
printf("enter your percentage : ");
scanf("%f",&percent);

if(percent>=90){
printf("grade: A\n");
}
else if(percent<90 && percent>=80){
printf("garde: B\n");
}
else if(percent<80 && percent>=70){
printf("grade: C\n");
}
else if(percent<70 && percent>=60){
printf("grade: D\n");
}
else if(percent<60 && percent>=35){
printf("grade: E\n");
}
else{
printf("grade: F(fail)\n");
}

return 0;
}