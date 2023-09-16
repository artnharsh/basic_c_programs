#include<stdio.h>
#include<stdbool.h>
bool isprime(intn){
  if(n==1 || n==0)
  {
  return false;
  }
   for(int i=2; i<n; i++){
     if(n%i==0){
        return false;
        }
        return true;
        } 
}
int main(){
 int a;
 printf("enter the range:\n");
 scanf("%d",&n);
 for(int i=1;i<a;i++){
   if(isprime(i)){
   printf("%d",i);
   }
 }
 return 0;
 }
   
