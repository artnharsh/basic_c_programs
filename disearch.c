#include<stdio.h>
int main(){
    int a[100],mid,key,high,d=1,low,i,m=0;
    printf("Enter the size of array : \n");
    scanf("%d",&m);

    printf("Enter the elements of array\n(only in acending order)\n=\n");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }

    high=m;
    low=0;

    printf("Enter the element whoes loction is to be found = ");
    scanf("%d",&key);

    

    while(high!=low || d){
        if(a[i]!=key){
            printf("Number is not present in the array");
            return 1;
        }
        else{
        mid=(high+low)/2;
        if(a[mid]==key){
            mid++;
            printf("The element is present at location = %d  ",mid);
            return 1;
        }
        else if(a[mid]<key){
            high-=1;
        }
        else if(a[mid]>key){
            low=+1;
        }
        }
        if(d=1){
            printf("Do you want to repeat the program if yes(1),if no(0)=");
            scanf("%d",&d);
        }

    }
    return 0;
}