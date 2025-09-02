#include<stdio.h>
int main(){
	int n;
	printf("enter the value of n ");
	scanf("%d",&n);
	int sum = 0;
	for(int i = 1;i<=n;i++){
		sum = sum+i*i;
	}
	printf("the sum of square of numbers is %d",sum);
	return 0;
}
