#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("enter the size of the array :");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0; i<n; i++){
		printf("enter the element %d :",i);
		scanf("%d",&arr[i]);
	}
	
	int *rev[n],j=0;
	for(i=n-1; i>=0; i--){
		rev[j]=&arr[i];
		j++;
	}
	printf("reversed array:\n");
	for(i=0; i<n; i++){
		printf("%u => %d\n",rev[i],*rev[i]);
	}
	
	return 0;
}
