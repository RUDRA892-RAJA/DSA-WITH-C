#include<stdio.h>
int factorial(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int n,f = 1;
	printf("enter the number ");
	scanf("%d",&n);
	printf("the factorial of the given number is %d",factorial(n));
}
