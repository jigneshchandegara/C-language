#include<stdio.h>

int main(){
	
	int x=2,y=3,z=5;
	int a;
	
	a= (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x));
	
	printf("%d",a);
	
	return 0;
}
