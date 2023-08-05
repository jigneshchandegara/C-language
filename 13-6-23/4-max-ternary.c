#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b); 
	
	printf("enter value of C:");
	scanf("%d",&c);
	
	printf("enter value of D:");
	scanf("%d",&d);
	
	a > b ? 
		a > c ?
			a > d ?  
					printf("A is maximum value") 
				
				  : printf("D is maximum value-1") 
				  
		: printf("C is maximum value-1") 
				  	
					
			  
	: 	b > c ?
			b > d ? 
				    printf("B is maximum value")
				 	
				  : printf("D is maximum value-1")
				 
		: printf("C is maximum value-2");
	
	return 0;
}
