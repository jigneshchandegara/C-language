#include<stdio.h>

int main (){
	
	char name[15];
	printf("Enter Name : ");
	scanf("%s",&name);
	
	if(name[0]>='a'){
		
		name[0] -= 32;
		printf("%s",name);
	}
	
	return 0;
}
