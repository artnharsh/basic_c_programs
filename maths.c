# include<stdio.h>

int main(){
float a, b, sum, sub, mul, div;
	
	printf("Enter two numbers:\n ");
	
	scanf("%f %f", &a, &b);
	sum = a+ b;
	 sub = a - b;
	mul = a * b;
	div = a / b;
	
	printf("Sum is : %f\n", sum);
	printf("Sub is : %f\n", sub);
	printf("mul is : %f\n", mul);
	printf("div is : %f\n", div);
	return 0 ;
}
