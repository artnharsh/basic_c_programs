#include<stdio.h>
int main(){
	int a[10][10], b[10][10], add[10][10],i,j,rows,cols;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	
	printf("Enter the number of columns:");
	scanf("%d",&cols);
	
	printf("Enter the elements of first matrix:\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the elements of second matrix:\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			add[i][j]=0;
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("Sum of the matrix is:\n");
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",add[i][j]);
		}
		printf("\n");
	}
	
return 0;	
	
}
