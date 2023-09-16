#include<stdio.h>
int main()
{
  int a,b;
  char op;
  float result;
  printf("enter a:");
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
  printf("enter operator (+,-,/,*) :");
  scanf("\n%c",&op);
    
    if(op=='+')
       result= a+b ;
    else if(op=='-') 
       result= a-b;
    else if(op=='*')
       result= a*b;
    else if(op=='/')
       result= a/b;
    printf("%f", result);
    return 0;           
}

