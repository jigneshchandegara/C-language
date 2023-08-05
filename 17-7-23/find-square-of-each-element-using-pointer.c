#include<stdio.h>

int main(){
	
	int a[] = {3,4,9,6,7};
	int *b1, *b2, *b3, *b4, *b5 ;
	
	b1 = &a[0];
	b2 = &a[1];
	b3 = &a[2];
	b4 = &a[3];
	b5 = &a[4];

	printf("%u => 3 %d\n",b1, (*b1)*(*b1));
	printf("%u => 4 %d\n",b2, (*b2)*(*b2));
	printf("%u => 9 %d\n",b3, (*b3)*(*b3));
	printf("%u => 6 %d\n",b4, (*b4)*(*b4));
	printf("%u => 7 %d\n",b5, (*b5)*(*b5));


//	int i;

//	for( i=0; i<5; i++){
//		printf("%u => %d\n",b1, (a[i])*(a[i]));
//	}
	
	return 0;
}
