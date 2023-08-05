#include<stdio.h>

int main (){
	int a;
	printf("enter value of ");
	scanf("%d",&a);
	
	if(a>0){
		printf("positive values");
	}
	else if(a<0){
		printf("nagetive values");
	}
	else{
		printf("neutral values");
	}
	return 0;
}
