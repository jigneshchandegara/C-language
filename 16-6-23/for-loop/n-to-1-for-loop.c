#include<stdio.h>

int main(){
	
	int a=1;
	int n;
	
	printf("enter value:");
	scanf("%d",&n);
	
	
	for(a=1; n>=a; n--){
		printf("%d\n",n);
	}
	
	
	return 0;
}
