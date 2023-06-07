#include<stdio.h>

int main(){
	
	int a;
	int b;
	int c;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	
	printf("A:%d\n",a);
	printf("B:%d",b);
	
	return 0;
}
