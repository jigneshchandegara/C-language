#include<stdio.h>

enum Week{
	
	sun, mon, tue, wed, thu, fri, sat
};

int main(){
	
	enum Week obj;
	
	obj = wed;
	
	printf("%d",obj);
	
	return 0;
}
