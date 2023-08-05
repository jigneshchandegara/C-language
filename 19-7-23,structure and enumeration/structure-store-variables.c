#include<stdio.h>

struct data{
	int a;
	char b;
};


int main(){
	
	struct data object;
	
	object.a=78;
	object.b='Z';
	
	printf("%d\n",object.a);
	printf("%d\n",object.b);
	
	return 0;
}
	
	

