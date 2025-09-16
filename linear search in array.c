// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int a[5],b,n=5,f = 0,x;
    printf("enter the elements of array");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element which do you want to search ");
    scanf("%d",&b);
    for(int i = 0;i<n;i++){
        if(b==a[i]){
            f = 1;
            x = i;
            break;
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
