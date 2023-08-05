#include<stdio.h>

int main(){
	
	int a,n=1,tabel;
	
	printf("enter number for multiplication tabel:");
	scanf("%d",&a);
	
	for(n=1; n<=10; n++){
		tabel=a*n;
		printf("%d x %d=%d\n",a,n,tabel);
	}
	
	return 0;
}
