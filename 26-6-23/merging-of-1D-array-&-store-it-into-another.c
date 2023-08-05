#include<stdio.h>

int main(){
	int n,m,a[n],b[m],c[n+m],i,j=0;

	printf("enter the size :");
	scanf("%d",&n);//5     0	1	2	3	4
//						   11	22	33	44	55
	
	for(i=0; i<n; i++){
		printf("enter the part A value %d : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("enter the size :");
	scanf("%d",&m); //4        0	1	2	3
//							  66	77	88	99
	
	for(i=0; i<m; i++){
		printf("enter the part B value %d : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n; i++){
		c[i]=a[i];
	
	}
	for(j=0; j<m; j++){ // i = 5 , j = 4
	 
		c[i+j]=b[j]; // c[] = 11 22 33 44 55 66 77 88 99
//		                      0  1  2  3  4  5  6  7  8
			
	}
	int k;
	for(k=0; k<n+m; k++){
		printf("%d ",c[k]);
	}


	return 0;
}
