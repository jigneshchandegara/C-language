#include<stdio.h>

int main(){
	
	int x=5,y=1,z=7;
	int a;
	
	a= (x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z))+(3*(z+x));
	
	printf("%d",a);
	
	return 0;
}
