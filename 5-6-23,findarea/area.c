#include <stdio.h>

int main(){
	float area,pi=3.14,r=10,sqare,a=10, rectangle,l=20,w,triangle,h=15,b=40;
//	*******area***********
	area = pi*r*r;
	printf("%f\n",area);
	
//	**********square*************
	sqare=a*a;
	printf("%f\n",sqare);
	
//	********rectangle****************
	printf("enter first value:");
	scanf("%f",&w);
	rectangle=l*w;
	printf("%f\n",rectangle);
	
//	**********triangle************
	triangle=h*b/2;
	printf("%f",triangle);
	
	return 0;
}

