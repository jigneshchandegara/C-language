#include<stdio.h>
 int main(){
 	
	int a=1,n,fact=1;
 	
	printf("enter value :");
	scanf("%d",&n);
	
	while(a<=n){
		
		fact=fact*a;
		printf("%d\n",fact);
		a++;
	}
	return 0;
 }
