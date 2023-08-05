#include<stdio.h>
 int main(){
 	
	int a=1,n,fact=1;
 	
	printf("enter value :");
	scanf("%d",&n);
	
	do{
		fact=fact*a;
		printf("%d\n",fact);
		a++;
	}
	while(a<=n);
		
	return 0;
 }
