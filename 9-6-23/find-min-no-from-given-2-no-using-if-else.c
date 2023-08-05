#include<stdio.h>

int main(){
	int a;
	int b;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b);
	
	if(a<b){
		printf("A: %d",a);
	}
	else{
		printf("B: %d",b);
	}
	return 0;
}
