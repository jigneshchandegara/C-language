#include<stdio.h>

int fact(int n){
	if(n>0){
		return n*fact(n-1);
	}
	else{
		return 1;
	}
}
int main (){
	
	int a;
	
	printf("enter value :");
	scanf("%d",&a);
	
	printf("main : %d",fact(a));
	
	return 0;
}
