#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("enter the size : ");
	scanf("%d",&n);

	int a[n];
	
	for(i=0; i<n; i++){

		printf("enter value [%d]",i);
		scanf("%d",&a[i]);
	
	}
	
	for(i=0;i<n; i++){
		if(a[i]<0){
			printf("%d\t",a[i]);
		}
	}

	
	return 0;
}
