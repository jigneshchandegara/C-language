#include<stdio.h>

int main(){
	float simpleinterest,principalamount,rate,time;
	
	printf(" enter first value of  principalamount : ");
	scanf("%f",&principalamount);
	printf(" enter second value of rate: ");
	scanf("%f",&rate);
	printf(" enter three value of time : ");
	scanf("%f",&time);
	
	simpleinterest=principalamount*rate*time/100;
	
	printf("%f",simpleinterest);
	
	return 0;
}
