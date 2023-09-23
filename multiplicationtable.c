#include<stdio.h>
int main(){
    int a,b,i;
    printf("enter the number of the table:\n");
    scanf("%d",&a);
    printf("enter the number up to which number you want:\n");
    scanf("%d",&b);
    
    for(i=1;i<=b;i++){    
    printf("%d * %d = %d\n",a,i,a*i);
    }
    

return 0;

}