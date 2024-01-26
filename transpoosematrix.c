#include<stdio.h>
int main(){
    int rows, cols;
    int i, j;
    printf("Enter the rows of the matrix =\n");
    scanf("%d",&rows);
    
    printf("Enter the cols of the matrix =\n");
    scanf("%d",&cols);

    int a[rows][cols];

    printf("Enter the elements of the matrix =\n");

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("The transpose of the matrix is =\n");

    for(j=0;j<cols;j++){
        for(i=0;i<rows;i++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   


}