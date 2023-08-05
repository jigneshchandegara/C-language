#include<stdio.h>

int main(){
	int n, a,t1=0,t2=1,t3;
	
	printf("enter value :");
	scanf("%d",&n);
	
	printf("%d,",t1);
	printf("%d,",t2);
	
	t3=t1+t2;
	
	for(a=3; a<=n; a++){
		
		printf("%d,",t3);
		
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
	return 0;
}
