#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b); 
	
	printf("enter value of C:");
	scanf("%d",&c);
	
	a > b ? a > c ? printf("A is maximum value") : printf("C is maximum value-1") : b > c ? printf("B is maximum value") : printf("C is maximum value-2");
	
	return 0;
}
