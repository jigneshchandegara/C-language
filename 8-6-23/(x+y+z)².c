#include<stdio.h>

int main(){
	
	int x=4,y=8,z=2;
	int a;
	
	a=  (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("%d",a);
	
	return 0;
}
