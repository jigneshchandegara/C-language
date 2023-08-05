#include<stdio.h>

int main (){
	
	char name;
	printf("Enter Name : ");
	scanf("%c",&name);
	
	if(name>='a' && name<='z'){
		
		name -= 32;
		printf("%c",name);
	}
	
	return 0;
}
