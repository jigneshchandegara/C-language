#include<stdio.h>

//pointer with array and string

int main(){
	
	int a[] = {7,6,8,2,3};
	int  *b1, *b2, *b3, *b4, *b5;
	
	b1 = &a[0];
	b2 = &a[1];
	b3 = &a[2];
	b4 = &a[3];
	b5 = &a[4];
	
	printf("%u => %d\n", b1,*b1);
	printf("%u => %d\n", b2,*b2);
	printf("%u => %d\n", b3,*b3);
	printf("%u => %d\n", b4,*b4);
	printf("%u => %d\n", b5,*b5);
	

	
	return 0;
}
