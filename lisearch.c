#include<stdio.h>
int main(){
    int h[100],i,m,a,flag=0;
    printf("Enter the size of the array=");
    scanf("%d",&a);

    printf("Enter the elements of the array=\n");
    for(i=0;i<a;i++){
        scanf("%d",&h[i]);
    }

    printf("Enter the number that is to be found in the entered elements=\n");
    scanf("%d",&m);

    for(i=0;i<a;i++){
        if(h[i]==m){
            flag=1;
             i++;
             printf("the entered number is present in array and its position is %d",i);
             }
                }  
                if(flag!=1){
                    printf("The entered number is not present in the array");
                }

 return 0;   
}