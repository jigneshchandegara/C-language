#include<stdio.h>

int main(){
	
	int n,m,r,reversed=0;
	
	printf("enter value :");
	scanf("%d",&n);
	
	m=n;
	while(n!=0){
		r=n%10;
		reversed=reversed*10+r;
		n=n/10;
	}
	if(m==reversed){
		printf("%d is a palindrome",m);
	}
	else{
		printf("%d is not a palindrome",m);
	}
	
	return 0;
}
