#include<stdio.h>

int main(){
	 
	int a[] = {3,4,9,6,7};
	
	int i;
	
	for(i=0; i<5; i++){
		printf("%u => %d\n",(a+i),*(a+i));
	}
	
	return 0;
}


