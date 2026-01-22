#include<stdio.h>
main(){
int num,i,pos=0,neg=0,even=0,odd=0;
printf("enter the number of elemnets : ");
scanf("%d",&num);
int arr[num];
printf("enter integers:\n",num);
scanf("%d",&arr[i]);
for(i=num;i<num;i++)
for(i=0;i<num;i++){

    if(arr[i]>0)
    pos++;
    else if(arr[i]<0)
    neg++;
    if(arr[i]%2==0)
    even++;
    else 
    odd++;   
}

printf("positive number is %d\nnegative number is %d\nodd number is %d\neven number is %d\n",pos,neg,even,odd);
return 0;
}