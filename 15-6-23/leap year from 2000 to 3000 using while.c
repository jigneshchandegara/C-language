#include<stdio.h>

int main(){
	
	int a=2000;
	
	while(a<=3000){
		if(a%4==0){
			printf("%d\t",a);
		}
		a++;
	}
	return 0;
}
