#include<stdio.h>

int main (){
	
	int n;
	
	printf(" how many character typing the enter number :");
	scanf("%d",&n);

	char name[n];
	printf("Enter Name : ");
	scanf("%s",&name);
	
	int i;
	
	for(i=0 ; i<=n ; i++){
		if(name[i]>='a' && name[i]<='z'){
		
		name[i] -= 32;
		}
		else if(name[i]>='A' && name[i]<='Z'){
			
			name[i] += 32;
		}
	}
	printf("%s",name);
	
	return 0;
}
