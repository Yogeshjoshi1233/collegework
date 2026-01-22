main(){
int a,b;
printf("enter a number : ");
scanf("%d",&a);
printf("enter a number : ");
scanf("%d",&b);

printf("before swapping : a=%d, b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping : a=%d , b=%d\n",a,b);

return 0;
}