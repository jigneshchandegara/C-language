#include<stdio.h>

int main(){
	
	int a=1;
	int n;
	
	printf("enter value:");
	scanf("%d",&n);
	
	
	for(a=1; a<=n; a++){
		if(a%2==1){
		printf("%d\n",a);
		}
	}
	
	return 0;
}
