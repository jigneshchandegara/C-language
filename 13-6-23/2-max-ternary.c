#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b); 
	
	a > b ? printf("A is maximum value") : printf("B is maximum value") ;
	
	return 0;
}
