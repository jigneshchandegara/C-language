#include<stdio.h>

int main(){
	
	int n,m,i,j,diagonalsum=0,antidiagonalsum=0;
	
	printf("enter the size row : ");
	scanf("%d",&n);
	
	printf("enter the size cloum: ");
	scanf("%d",&m);
	
	int a[n][m];
	
	for(i=0; i<n; i++){
		for(j=0;j<m; j++){
			printf("enter value[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n; i++){
		for(j=0;j<m; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(i==j){
				diagonalsum += a[i][j];  // sum = sum+a[i][j]
			}
			if(i+j==n-1){
				antidiagonalsum +=a[i][j];   // sum = sum+a[i][j]
			}
		}
	}
	
	printf("cross diagonal diagonalsum = %d and antidiagonalsum = %d",diagonalsum,antidiagonalsum);
	
	return 0;
}
