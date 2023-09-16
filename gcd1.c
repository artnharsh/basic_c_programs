//harshal patil 217
#include<stdio.h>
int main(){
int a,b,g,i;
     printf("Enter the two numbers:\n");
     scanf("%d%d",&a,&b);
for(i=1;i<=a && i<=b;i++)
	{
	if(a%i==0 && b%i==0)
	g=i;
	}
printf("GCD of the two numbers %d and %d is %d",a,b,g);
return 0;		     
}
