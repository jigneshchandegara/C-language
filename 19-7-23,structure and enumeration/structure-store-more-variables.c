#include<stdio.h>

struct data{
	int a;
	char b;
};


int main(){
	
	struct data object1,object2,object3;
	
	object1.a=78;
	object1.b='Z';
	
	object2.a = 23;
	object2.b = 'N';
	
	object3.a = 25;
	object3.b = 'H';
	
	printf("%d\n",object1.a);
	printf("%c\n",object1.b);

	printf("%d\n",object2.a);
	printf("%c\n",object2.b);

	printf("%d\n",object3.a);
	printf("%c\n",object3.b);
	
	return 0;
}
	
	

