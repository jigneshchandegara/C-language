#include<stdio.h>

int main(){
	
	int a=1;
	int n;
	
	printf("enter value:");
	scanf("%d",&n);
	
	do{
		if(a%2==1){
		printf("%d\n",a);
		}
		a++;
	}
	while(a<=n);
	
	
	
	return 0;
}
