#include<stdio.h>

int main (){
	int n,a,count=0;
	
	printf("enter value :");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++){
		if(n % a==0){
			count++;
		}
	}
	if(count==2){
		printf("%d is a prime\n",n);
	}
	else{
		printf("%d is not prime\n",n);
	}
	return 0;
}
