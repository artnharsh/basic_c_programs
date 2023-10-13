#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter the number =");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        i++;
    }
    printf("The total digits are %d ",i);
    return 0;
}