#include<stdio.h>

int main (){
	
	char name;
	printf("Enter Name : ");
	scanf("%c",&name);
	
	if(name>='A' && name<='Z'){
		name += 32;
		printf("%c",name);
	}
	
	return 0;
}
