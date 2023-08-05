#include<stdio.h>


int main (){
	int a=10,b=15;
	int *c,*d;

	a=a+b;
	b=a-b;
	a=a-b;
	
	c = &a;
	d = &b;
	
	printf("%u => A: %d\n",c,a);
	printf("%u => B: %d\n",d,b);
	
	return 0;
}
