#include<stdio.h>

int main(){
	
	int u;
	int amt,sub,total;
	
	printf("enter unit number :");
	scanf("%d",&u);
	
	if(u<=50){
		
		amt=u*0.50;
		
	}
	else if(u<=150){
		
		amt=(u-50)*0.75+25;
		
	}
	else if(u<=250){
		
		amt=(u-150)*1.20+100;	
		
	}
	else{
		
		amt=(u-250)*1.50+220;
		
	}
	sub =amt*0.20;
	total=sub+amt;
	
	printf("Total : %d",total);
	
	return 0;
}
