#include<stdio.h>

int main(){
	
	FILE *p;
	char name[10];
	
	p = fopen("Demo.txt","w");
//	p = fopen("Demo.txt","a");

	if(p ==NULL){
	printf("error");
	}
	else{
	printf("enter text :");
	gets(name);
	
	fputs(name,p);
	
	fclose (p);
	}
	
	return 0;
}
