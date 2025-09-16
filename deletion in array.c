#include <stdio.h>
int main() {
    int a[5],k,b,n=5;
    printf("enter the elements of array");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("at which position do you wnat to delete ");
    scanf("%d",&b);
    printf("before deletion ");
    for(int i = 0;i<n;i++){
        printf(" %d ",a[i]);
    }
    for(int j = b;j<n;j++){
        a[j] = a[j+1];
    }
    n =n-1;
    printf("\nafter deletion ");
    for(int i = 0;i<n;i++){
        printf(" %d ",a[i]);
    }
    return 0;
}
