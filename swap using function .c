#include <stdio.h>
void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d \nb = %d",a,b);
}
int main() {
    int a,b;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of b ");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
