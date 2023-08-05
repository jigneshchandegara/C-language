#include<stdio.h>

int main(){
	
	int n,m,i,j,sum=0;
	
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
				sum += a[i][j]; // sum = sum+a[i][j]
			}
		}
	}
	
	printf("diagonal sum = %d",sum);
	
	return 0;
}
