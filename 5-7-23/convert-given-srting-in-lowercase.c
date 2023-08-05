#include <stdio.h>
#include <string.h>
 
 
int main()
{
    char name[1000];  
  
    printf("Enter  the string: ");
    gets(name);
    
        
	strlwr(name);         
 
    printf("string in lowercase ='%s'\n",name);
    
    return 0;
    
}
