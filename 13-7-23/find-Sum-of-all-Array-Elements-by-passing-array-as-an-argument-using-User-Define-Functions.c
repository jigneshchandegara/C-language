#include<stdio.h>

void display(int a[],int n);

int main()
{
   int n,i;
	
	printf("enter value :");
	scanf("%d",&n);
	
	int array[n];
	
	for(i=0; i<n; i++){
		printf("enter number %d :", i);
		scanf("%d",&array[i]);
	}
	
	display(array,n);

    return 0;
}

void display(int a[],int n){
	
	int i,sum=0;
	
	for(i=0; i<n; i++){
		sum =sum+a[i];
	}
	
	printf("sum = %d", sum);
}
