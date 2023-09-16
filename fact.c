#include<stdio.h>
int main(){
int n1,i,fact=1;
printf("Enter the number:");
scanf("%d",&n1);
    for(i=1;i<=n1;i++){
    fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
