#include<stdio.h>

int main(){
	
	int n,m,i,j;
	
	printf("enter the size row : ");
	scanf("%d",&n);
	
	printf("enter the size cloum: ");
	scanf("%d",&m);
	
	int a[n][m];
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("enter value[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	int transpose[n][m];
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			transpose[j][i] = a[i][j];
		}
	}
	
	printf("transpose matrix\n");
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
