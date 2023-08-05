#include<stdio.h>

int main(){
	
	char a;
	
	printf("enter the month name :");
	scanf("%c",&a);
	
	switch(a){
		
		case 'j':
			printf("january");
			break;
			
		case 'f':
			printf("February");
			break;
			
		case 'm' :
			printf("March");
			break;
			
		case 'a':
			printf("April");
			break;
			
		case 'my':
			printf("May");
			break;
			
		case 'ju':
			printf("June");
			break;
			
		case 'jl':
			printf("July");
			break;
			
		case 'au':
			printf("August");
			break;
			
		case 's':
			printf("September");
			break;
			
		case 'o':
			printf("October");
			break;
			
		case 'n':
			printf("November");
			break;
			
		case 'd':
			printf("December");
			break;
			
		default:
			printf("valid enter month charecter");
	}
	
	return 0;
}
