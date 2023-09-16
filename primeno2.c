#include<stdio.h>
int main(){
int n,i;
printf("Enter the number which you want to check:");
scanf("%d",&n);
for(i=1;i<=n-1;i++){
          if(i%n==0)
          {
          break;
          }
   }
      if(i>=n){
      printf("The entered number is the prime number");}
      else{
      printf("The entered number is not prime number");}
   
   return 0; 
}

