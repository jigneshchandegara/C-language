#include<stdio.h>

int main(){
	
	int a=1;
	int n;
	
	printf("enter value:");
	scanf("%d",&n);
	do{
		printf("%d\n",n);
		n--;
	}
	while(n>=a);
		
	
	
	return 0;
}
