#include<stdio.h>

int main(){
	
	int a,b,c,d;
	while(1){
		
	printf("enter the value A:");
	scanf("%d",&a);
	
	printf("enter the value B:");
	scanf("%d",&b);
	
	printf("enter the value C:");
	scanf("%d",&c);
	
	printf("enter the value D:");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is a maximum value\n\n");
			}
			else{
				printf("D is a maximum value-1\n\n");
			}
		}
		else{
			printf("C is a maximum value-1\n\n");
		}
	}
	else{
		if(b>c){
			if(b>d){
				printf("B is a maximum value\n\n");
			}
			else{
				printf("D is a maximum value-2\n\n");
			}
		}
		else{
			printf("C is a maximum value-2\n\n");
		}
	}
	}
	
	return 0;
}
