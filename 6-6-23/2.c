#include<stdio.h>

int main(){
	
	int a;
	int b;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("A:%d\n",a);
	printf("B:%d",b);
	
	return 0;
}
