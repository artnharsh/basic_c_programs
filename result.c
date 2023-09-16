#include<stdio.h>
int main() {
	int p,c,m,h,e,f=0;
	float per;
	printf("Enter the Subject marks:\n");
	scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);
	f=p+c+m+h+e;
	printf("Total marks obtained=%d\n",f);
	per=f/5;
	printf("The percentage obtained=%.2f\n ",per);
	
		if(per>90)
		{
		printf("First Class\n");
		}
		else if(per>80 )
		{
		printf("Second Class\n");
		}
		else if(per>35 )
		{
		printf("Third Class\n");
		}
return 0;
}		

