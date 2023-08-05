#include<stdio.h>

int main(){
	
	int x=2,y=3;
	int a;
	
	a= (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	
	printf("%d",a);
	
	return 0;
}
