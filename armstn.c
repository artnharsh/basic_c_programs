//harshal patil 217
#include<stdio.h>
int main(){
int a,b,sum=0,temp;
	printf("Enter the number:\n");
	scanf("%d",&a);
temp=a;

 while(a>0)
	{
	b=a%10;
	sum=(sum)+(b*b*b);
	a=a/10;
	}	
	if(temp==sum)
	printf("The entered number is the armstrong number")
	else
	printf("The entered number is not the armstrong number");
return 0;									
}
