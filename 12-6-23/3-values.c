#include<stdio.h>

int main (){
	
	int a,b,c;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b);
	
	printf("enter value of C:");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("A is a small values\n\n");
		}
		else{
			printf("C is a small values-1\n\n");
		}	
	}
	
	else{
		if(b<c){
			printf("b is a small values\n\n");
		}
		else{
			printf("C is a small values-2\n\n");
		}
		
	}
	return 0;
}

