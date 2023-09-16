//harshal patil 217
#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
printf("enter the number:\n");
scanf("%d",&n);
temp=n;
  
  
  while(n>0)
  {
  r=n%10;
  sum=(sum*10)+r;
  n=n/10;
  }
if(temp==sum)
printf("palindrome number");  
else
printf(" not the palindrome number");
return 0;
}
