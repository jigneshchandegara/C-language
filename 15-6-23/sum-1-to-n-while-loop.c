#include<stdio.h>

int main(){
	
	int a=1,n,sum=0;
	
	printf("enter value :");
	scanf("%d",&n);
	
	while(a<=n){
		printf("%d\n",a);
		sum = sum+a;
		a++; 
	}
	printf("sum = %d",sum);
	return 0;
}
