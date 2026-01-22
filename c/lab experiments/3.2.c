#include<stdio.h>
main(){
float weight,height,BMI;
printf("enter your weight in kilogram : \n");
scanf("%f",&weight);
printf("enter your height in meter : \n");
scanf("%f",&height);

BMI=weight/height*height;
printf("your BMI is %f\n",BMI);

if(BMI<15.0){
printf("BMI category :starvation\n");
}
else if(BMI>=15.1 && BMI <=17.5){
printf("BMI category : anorexic\n");
}
else if(BMI>=17.6 && BMI<=18.5){
printf("BMI category : underweight\n ");
}
else if(BMI>=18.6 && BMI<=24.9){
printf("BMI category : ideal\n");
}
else if (BMI>=25.0 && BMI<=29.9){
printf("BMI category : overweight\n");
}
else if (BMI>=30.0 && BMI<=39.9){
printf("BMI category : obese\n");
}
else { //bmi>=40.0
printf("BMI category : morbidily obese\n");
}
return 0;
}