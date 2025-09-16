
#include <stdio.h>
int main() {
    int a[5],b,n=5,low = 0,high = n-1,f = 0,x,mid;
    printf("enter the elements of array");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter the element which do you want to search ");
    scanf("%d",&b);
    while(low<high){
        mid = (low+high)/2;
        if(a[mid] == b){
            f=1;
            x = mid;
            break;
        }
        else if(a[mid]<x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(f==1){
        printf("the element found at index %d",x);
    }
    else{
        printf("not found ");
    }
    return 0;
}
