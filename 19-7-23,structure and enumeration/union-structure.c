#include<stdio.h>

union data{
	int a;
	char b;
};

int main(){
	
	union data object;
	
	object.a=65;
	object.b='z';
	
	printf("%d\n",object.a);
	printf("%c\n",object.b);
	
	return 0;
}
	
	

