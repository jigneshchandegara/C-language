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
		printf("\n");
	}
	
	for(i=0;i<n; i++){
		for(j=0;j<m; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++){
		sum=0;
		for(j=0;j<m; j++){
			sum +=a[j][i];  // sum = sum+a[j][i]
		}
		printf("sum : %d\n",sum);
	}
	
	
	
	return 0;
}
