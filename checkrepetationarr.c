#include<stdio.h>
int main(){
    int n,a[100],max;

    printf("Enter the size of the array = ");
    scanf("%d",&n);

    printf("Enter the elements of the array = ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    max=a[0];
    int count=1;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
           
            if(a[i]!=a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else if(a[i]==a[j]){
                printf("the number repeated is %d",a[j]);
                break;
            }
            
        }
        
        }
    
return 0;
}