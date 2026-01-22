#include<stdio.h>
main(){
int n,num,i,count=0;
printf("enter the number of elements : ");
scanf("%d",&n);

int (arr[n]);
printf("enter the number of integers : ",n);
for (i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter the number to find its frequency : ");
scanf("%d",&num);

for(i=0;i<n;i++){
    if(arr[i]==n)
    count++;
}
printf("frequency of the number is %d=%d\n",num,count);
return 0;
}