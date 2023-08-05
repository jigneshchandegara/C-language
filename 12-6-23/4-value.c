#include<stdio.h>

int main (){
	
	int a,b,c,d;
	
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b);
	
	printf("enter value of C:");
	scanf("%d",&c);
	
	printf("enter value of D:");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is a big values\n\n");
			}
			else{
				printf("D is a big values-1\n\n");
			}
		}
		else{
			printf("C is a big values-1\n\n");
		}	
	}
	
	else{
		if(b>c){
			if(b>d){
				printf("B is a big values\n\n");
			}
			else{
				printf("D is a big values-2\n\n");
			}
		}
		else{
			printf("C is a big values-2\n\n");
		}	
	}
	
	return 0;
}

