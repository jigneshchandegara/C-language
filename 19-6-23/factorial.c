#include<stdio.h>

int main(){
	int a,fact=1,n;
	
	printf("enter value :");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
		fact=fact*a;
	}
	printf("factorial of %d is: %d",n,fact);
	return 0;
}
