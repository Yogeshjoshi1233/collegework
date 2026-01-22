#include<stdio.h>
#include<math.h>
main(){
float a,b,c,discriminant,root1,root2,realpart,imaginarypart;
printf("enter coefficients a,b and c: ");
scanf("%f %f %f",&a,&b,&c);

if(a==0){
printf("this is not a quadratic equation\n");
return 0;
}
discriminant=b*b-4*a*c;

if(discriminant>0){
root1=(-b+sqrt(discriminant))/(2*a);
root2=(-b-sqrt(discriminant))/(2*a);

printf("roots are real and distinct\n");
printf("root1=%f,root2=%f\n",root1,root2);
}
else if (discriminant==0){
root1=root2=-b/(2*a);
printf("root are real and equal\n");
printf("root1=root2=%f\n",root1);
}
else{
realpart=-b/(2*a);
imaginarypart=sqrt(-discriminant/(2*a));
printf("roots are complex and conjugates\n");
printf("root1=%f+%f\n",realpart,imaginarypart);
printf("root2=%f-%f\n",realpart,imaginarypart);
}

return 0;
}