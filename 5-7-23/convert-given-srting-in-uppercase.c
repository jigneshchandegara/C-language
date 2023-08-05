#include <stdio.h>
#include <string.h>
 
 
int main(){
    char name[1000];  
  
    printf("Enter  the string: ");
    gets(name);
    
        
	strupr(name);         
 
    printf("string in uppercase =%s\n",name);
    
    return 0;
    
}
