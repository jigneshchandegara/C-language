#include<stdio.h>

int main(){
	
	int a=1;
	int n;
	
	printf("enter value:");
	scanf("%d",&n);
	
	while(n>=a){
		printf("%d\n",n);
		n--;
	}
	
	return 0;
}
