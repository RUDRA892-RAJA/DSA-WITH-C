#include <stdio.h>
int main() {
    int a[5];
    printf("enter the elements of array");
    for(int i = 0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("the elements of an array");
    for(int i = 0;i<5;i++){
        printf(" %d ",a[i]);
    }
    return 0;
}
