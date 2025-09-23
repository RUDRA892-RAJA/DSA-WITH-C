#include <stdio.h>
int main() {
    int n = 5;
    int a[] = {10,20,30,40,50};
    int k,x;
    printf("enter the value which has to be added ");
    scanf("%d",&k);
    printf("enter the value of index ");
    scanf("%d",&x);
    int arr[n+1];int j = 0;
    for(int i =0;i<x;i++){
        arr[j] = a[i];
        j++;
    }
    arr[x] = k;
	for(int i = x+1;i<n+1;i++){
		arr[i] = a[i-1];
	}
	for(int i =0;i<n+1;i++){
		printf("%d ",arr[i]);
	} 
    return 0;
}
