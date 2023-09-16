#include<stdio.h>
int main() {
	int p,c,m,f=0;
	float per;
	
	printf("Enter the physics marks:\n");
	scanf("%d",&p);
	
	while(p>100 || p<0 ){
		printf("Enter the valid marks:");
		scanf("%d",&p);
	}
	
	printf("Enter the chemistry marks:\n");
	scanf("%d", &c);
	
        while(c>100 || c<0 ){
		printf("Enter the valid marks:");
		scanf("%d",&c);
	}
	
	printf("Enter the maths marks:\n");
	scanf("%d", &m);
	
	while(m>100 || m<0 ){
		printf("Enter the valid marks:");
		scanf("%d",&m);
	}
	
	f=p+c+m;
	printf("Total marks obtained=%d\n",f);
	per=f/3;
	printf("The percentage obtained=%.2f \n",per);
	
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

