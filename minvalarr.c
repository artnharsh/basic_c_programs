#include<stdio.h>
int main(){
    int n,a[100],i,j;

    printf("Enter the size of the array = \n");
    scanf("%d",&n);

    printf("Enter the elements of the array = \n");
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
    }

    int min=a[0];

    for(i=1;i<=n;i++){
        if(a[i]<min){
            min=a[i];
        }
        }
         printf("The smallest element of the array is =\n%d",min);
        return 0;
    }

