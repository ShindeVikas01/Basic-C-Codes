//Find given number is Palindrome or not using C Programing

#include<stdio.h>  
 int main()    
{    
	int number,mod,sum=0,temp;    
	
	//Get Number from user
	printf("Enter the number=");    
	scanf("%d",&number);    
	temp=number;    
	
	//Calculation for finding Palindrome number
	while(number>0)    
	{    
		mod=number%10;    
		sum=sum*10+mod;    
		number=number/10;    
	}    
	if(temp==sum)   
	{
		printf("Palindrome  number "); 
	} 
	else 
	{
		printf("Not Palindrome number");  
	}   
	  
	return 0;  
}   