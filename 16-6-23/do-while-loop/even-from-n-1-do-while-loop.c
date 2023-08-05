#include<stdio.h>

int main(){
	
	int a=1;
	int n;
	
	printf("enter value:");
	scanf("%d",&n);
	
	do{
		if(n%2==0){
		printf("%d\n",n);
		}
		n--;
	}
	while(a<=n);
	
	
	
	return 0;
}
