#include<stdio.h>

//scale of pointer

int main(){
	
	int a[] = {5,7,6,8,3};
	int *b;
	
	b = a;
	
	printf("%u => %d\n",b+0,*(b+0));
	printf("%u => %d\n",b+1,*(b+1));
	printf("%u => %d\n",b+2,*(b+2));
	printf("%u => %d\n",b+3,*(b+3));
	printf("%u => %d\n",b+4,*(b+4));
	
	

	
	return 0;
}
