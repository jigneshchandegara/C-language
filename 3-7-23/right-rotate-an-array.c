#include<stdio.h>

int main(){
	int n;
	
	printf("Enter a Arrey value :");
	scanf("%d", &n);
	
	int a[n], i;
	 
	for(i=0 ; i<n ; i++){
	    printf("enter a arrey value of A[%d] :", i);
	    scanf("%d", &a[i]);	
	}
	 
	int k,j;
	printf("how many times right rotate : ");
    scanf("%d", &k);
    
    int temp;  //n = 6

    for(i=0 ; i<k ; i++){  // 3
    	temp = a[n-1]; // 6-1 = 5     temp = a[5]
    	for(j=n-1 ; j>0 ; j--){   //  j=5   5>0     0
     	   a[j] = a[j-1];       //a[0]  a[]
		}
		a[0] = temp;
	}
	
	for(i=0 ; i<n ; i++){
		printf("%d ",a[i]);	
	}
	
	
    return 0;
     
 }

