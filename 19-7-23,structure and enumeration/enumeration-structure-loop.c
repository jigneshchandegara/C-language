#include<stdio.h>

enum Week{
	
	sun=10, mon, tue, wed, thu, fri, sat
};

int main(){
	
	int i;
	
	for(i=sun; i<sat; i++){
		printf("%d\n",i);
	}

	
	return 0;
}
