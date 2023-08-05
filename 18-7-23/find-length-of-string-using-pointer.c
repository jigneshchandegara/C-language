#include<stdio.h>



int main() {
    char str[]  = "jignesh";

	char *ptr=str;

	int count=0;	

	while(*ptr!='\0'){
		count++;
		ptr++;
	}

	printf("Length of string = %d",count);

	return 0;
}
