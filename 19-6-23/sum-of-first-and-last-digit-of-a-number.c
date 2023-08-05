#include<stdio.h>

int main(){
	
	int n,sum=0,lastdigit,firstdigit;
	
	printf("enter value :");
	scanf("%d",&n);
	
	lastdigit=n%10;
	
	while(n>=10){
		n=n/10;
	}
	firstdigit = n;
	
	sum = firstdigit+lastdigit;
	printf("Sum of first and last digit = %d",sum);
	
	return 0;
}
