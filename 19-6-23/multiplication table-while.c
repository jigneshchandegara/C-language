#include<stdio.h>

int main(){
	
	int a,n=1,tabel;
	
	printf("enter number for multiplication tabel:");
	scanf("%d",&a);
	
	while(n<=10){
		tabel=a*n;
		printf("%d x %d=%d\n",a,n,tabel);
		n++;
	}
	return 0;
}
