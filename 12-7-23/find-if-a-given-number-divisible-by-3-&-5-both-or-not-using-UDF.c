#include<stdio.h>

int divisible(int a){
	
	if(a%3==0 && a%5==0){
		printf("divisible");
	}
	else{
		printf("not divisible");
	}
}
int main(){
	
	int n;
	
	printf("enter value :");
	scanf("%d",&n);
	
	divisible(n);
	
	return 0;
}
