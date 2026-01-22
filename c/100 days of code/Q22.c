#include<stdio.h>
main(){
float costprice,sellingprice,profit,loss,percentage;
printf("enter cost price: ");
scanf("%f",&costprice);
printf("enter selling price: ");
scanf("%f",&sellingprice);

if(sellingprice>costprice){
profit=sellingprice-costprice;
percentage=(profit/costprice)*100;

printf("profit=%f\n",profit);
printf("profitpercentage=%f\n",percentage);
}
else if(costprice>sellingprice){
loss=costprice-sellingprice;
percentage=(loss/costprice)*100;
printf("loss=%f\n",loss);
printf("losspercentage=%f\n",percentage);
}
else{
printf("no profit,no loss\n");
}
return 0;
}

