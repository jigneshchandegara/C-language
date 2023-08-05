#include<stdio.h>

int main(){
	
	int a,n=1,tabel;
	
	printf("enter number for multiplication tabel:");
	scanf("%d",&a);
	
	
	do{
		tabel=a*n;
		printf("%d x %d=%d\n",a,n,tabel);
		n++;	
	}
	while(n<=10);
	
	
	return 0;
}
