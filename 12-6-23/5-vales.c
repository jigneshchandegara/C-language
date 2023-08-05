#include<stdio.h>

int main (){
	
	int a,b,c,d,e;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b);
	
	printf("enter value of C:");
	scanf("%d",&c);
	
	printf("enter value of D:");
	scanf("%d",&d);
	
	printf("enter value of E:");
	scanf("%d",&e);
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("A is a small values\n\n");
				}
				else{
					printf("E is a small values-1\n\n");
				}
			}
			else{
				printf("D is a small values-1\n\n");
			}
		}
		else{
			printf("C is a small values-1\n\n");
		}	
	}
	
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("B is a small values\n\n");
				}
				else{
					printf("E is a small values-2\n\n");
				}
			}
			else{
				printf("D is a small values-2\n\n");
			}
		}
		else{
			printf("C is a small values-2\n\n");
		}	
	}
	
	return 0;
}

