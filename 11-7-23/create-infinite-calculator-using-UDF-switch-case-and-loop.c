#include<stdio.h>
#include<string.h>

void sum(int a, int b){
	printf("sum : %d\n\n",a+b);
}

void sub(int a, int b){
	printf("sub : %d\n\n",a-b);
}
   
void multi(int a, int b){
	printf("multi : %d\n\n",a*b);
}

void divi(int a, int b){
	printf("divi : %d\n\n",a/b);
}
int main(){
	
	int first, second;
	char sign;
	
	while(1){
	
	printf("enter the first value :");
	scanf("%d",&first);
	
	printf("enter the second value :");
	scanf("%d",&second);
	
	printf("(+ ,- ,* ,/)\n\n");
	
	printf("enter the sign : ");
	scanf(" %c", &sign);
	
	switch(sign){
		case '+':
			sum(first,second);
			break;
			
		case '-':
			sub(first,second);
			break;
			
		case '*':
			multi(first,second);
			break;
			
		case '/':
			divi(first,second);
			break;
		
		default: 
        	printf("Invalid operator");	
        	break;
	}
	}
	return 0;
}
