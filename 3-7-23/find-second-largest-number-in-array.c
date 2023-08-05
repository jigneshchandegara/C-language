#include<stdio.h>


int main(){

	int n;
	
	printf("Enter a Arrey value :");  
	scanf("%d", &n);  // 5
	 
	int a[n], i;
	 
	for(i=0 ; i<n ; i++){							   //0    1   2   3    4
		printf("enter a arrey value of A[%d] :", i);  // 87, 68, 49, 97, 100
		scanf("%d", &a[i]);	
	}
	 
	int first, second;
	first = a[0];
	second = a[0];
	
	for(i=0 ; i<n ; i++){								 //  0			 1			 2			3			4
	    if(a[i] > first){    							//87 > 87	, 68 > 87	, 49 > 87,	 97 > 87,	100 > 87
			second = first;								
	 		first = a[i];
		}										  //		   0		   ,		 1			 ,			2			,	  		3 		   ,    		4 			
		 else if(a[i]>second && a[i]<first ){    //  87 > 68  &&  87 < 87 , 68 > 68  &&  68 < 87 , 49 > 68  &&  49 < 87 , 97 > 68  &&  97 < 87 , 100 > 68  &&  100 < 87
		 	second = a[i];
		}
	}

	printf("\n The Second Largest Number in this Array =  %d", second);
	
	
	return 0;
}

//#include<stdio.h>  
//void main ()  
//{  
//    int arr[100],i,n,largest,sec_largest;  
//    printf("Enter the size of the array?");  
//    scanf("%d",&n);  
//    printf("Enter the elements of the array?");  
//    for(i = 0; i<n; i++)  
//    {  
//        scanf("%d",&arr[i]);  
//    }  
//    largest = arr[0];  
//    sec_largest = arr[1];  
//    for(i=0;i<n;i++)  
//    {  
//        if(arr[i]>largest)  
//        {  
//            sec_largest = largest;  
//            largest = arr[i];  
//        }  
//        else if (arr[i]>sec_largest && arr[i]!=largest)  
//        {  
//            sec_largest=arr[i];  
//        }  
//    }  
//    printf("largest = %d, second largest = %d",largest,sec_largest);  
//      
//}
