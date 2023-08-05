#include<stdio.h>

int main(){
	
	char a;
	
	printf("enter the month first letar :");
	scanf("%c",&a);
	
	switch(a){
		case 'm':
			printf("output:Monday");
			break;
			
		case 't':
			printf("output:Tuesday");
			break;
			
		case 'w':
			printf("output:Wednesday");
			break;
			
		case 'h':
			printf("output:Thursday");
			break;
			
		case 'f':
			printf("output:Friday");
			break;
			
		case 's':
			printf("output:Saturday");
			break;
			
		case 'u':
			printf("output:Sunday");
			break;
	}
	return 0;
}
