//Factorial Program using for loop.

#include<stdio.h>  
int main()    

{    
 	int i,fact=1,number;    
 
 	//Get number from user
	printf("Enter a number:");    
	scanf("%d",&number);    
	
	//Factorial Calculation
    for(i=1;i<=number;i++)
	{    
      	fact=fact*i;    
  	}    
  	
  	//Display Output
 	printf("\nFactorial of %d is=%d",number,fact);    
	return 0;  
}   