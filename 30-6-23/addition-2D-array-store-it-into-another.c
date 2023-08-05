#include<stdio.h>

int main(){
	
	int n,m,i,j;
	
	printf("enter the size row : ");
	scanf("%d",&n);
	
	printf("enter the size cloum: ");
	scanf("%d",&m);
	
	int a[n][m];
	int b[n][m];
	int sum[n][m];
	
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
		for(j=0;j<m; j++){
			printf("enter value[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n; i++){
		for(j=0;j<m; j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n; i++){
		for(j=0;j<m; j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
	}
	
	for(i=0;i<n; i++){
		for(j=0;j<m; j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
