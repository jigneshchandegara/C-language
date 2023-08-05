#include<stdio.h>

//size()operator and pointer

int main(){
	
	int a=10;
	int *b;
	
	b=&a;
	
	printf("%p\n",b);
	printf("%u\n",b);
	printf("%x\n",b);
	
	return 0;
}
