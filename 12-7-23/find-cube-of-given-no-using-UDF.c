#include<stdio.h>

int cube(int a){
	
//	printf("cube : %d",a*a*a);
	
	return a*a*a;
}

int main(){
	
	int n;
	
	printf("enter value :");
	scanf("%d",&n);
	
//	cube(n);
	
	printf("main :%d",cube(n));
	
	return 0; 
}
