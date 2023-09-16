#include<stdio.h>
int main()
{
int k,i, flag=0;
printf("enter the number:");
scanf("%d",&k);
 for(i=2;i<=k-1;i++){
 if(k/i==0)
 flag=1;
 break;
 }
 if(flag=1)
 printf("the number is the not prime number");
 else
 printf("the number is the prime number");
 return 0;
 }
