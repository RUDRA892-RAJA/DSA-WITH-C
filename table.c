#include<stdio.h>
int main(){
	int a;
	printf("enter the number whoose table has to be print ");
	scanf("%d",&a);
	for(int i = 1;i<=10;i++){
		printf("%d X %d = %d \n",a,i,a*i);	
	}  
	return 0;
}
