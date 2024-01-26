#include<stdio.h>
int main()
{
  float a,b;
  char op;
  float result;
  int h=1;
  int i;
    while (h==1)
    {
        a=0;
        b=0;
        result=0;
        printf("enter a:");
        scanf("%f",&a);
        printf("enter b:");
        scanf("%f",&b);
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
        printf("%f\n", result);
        printf("---------------------------\n");
        
        printf("To repeat process yes 1/no 0\n");
        scanf("%d",&h);    
        i++;      
    }
    return 0;
}



