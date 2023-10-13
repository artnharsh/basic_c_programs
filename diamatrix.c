#include<stdio.h>
int main(){
    int i,j,a[10][10],sum=0;
    printf("Enter the elements of the matrix =\n");


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
           
         
    for(i=0;i<3;i++){
        sum+=a[i][i];
    }


    printf("The sum of the diagonal elements of the matrix is = %d ",sum);

  return 0;  
}