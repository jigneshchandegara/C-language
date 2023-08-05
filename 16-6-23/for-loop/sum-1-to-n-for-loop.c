#include<stdio.h>

int main(){
	
	int a,n,sum=0;
	
	printf("enter value :");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++){
		printf("%d\n",a);
		sum = sum+a;
	}
	
	printf("sum = %d",sum);
	return 0;
}
