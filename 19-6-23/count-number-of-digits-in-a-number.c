#include<stdio.h>

int main(){
	
	int n,count;
	
	printf("enter value :");
	scanf("%d",&n);
	
	while(n!=0){
		n/=10;
		count++;
	}
	printf("number of digits :%d",count);
	return 0;
}
