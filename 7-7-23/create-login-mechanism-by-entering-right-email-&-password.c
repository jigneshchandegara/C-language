#include<stdio.h>
#include<string.h>

int main(){
	
	char username[18];
	char password[8];

	printf("Enter the username: ");
	gets(username);

	printf("\nEnter the password: ");
	gets(password);

	if(strcmp(username, "Jignesh") == 0){
			//username verification sucessful
			//next step is to verify the password
		if(strcmp(password, "98765") == 0){
			//password verification also successful
			printf("\nUser successfully logged in...");
		}
		else{
			//invalid password. Report it
			printf("\nPassword entered is invalid");
		}
	}
	else{
		//invalid username. Report it
		printf("\nUsername entered is invalid");
	}
	

	
	return 0;
}
