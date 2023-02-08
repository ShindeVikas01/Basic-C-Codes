//Find given number is armstrong or not

#include<stdio.h>  
 int main()    
{    
	int number,mod,sum=0,temp;    
	
	//Get Number from user
	printf("Enter the number=");    
	scanf("%d",&number);    
	temp=number;    
	
	//Calculation for finding armstron number
	while(number>0)    
	{    
		mod=number%10;    
		sum=sum+(mod*modr*mod);    
		number=number/10;    
	}    
	if(temp==sum)   
	{
		printf("Armstrong  number "); 
	} 
	else 
	{
		printf("Not Armstrong number");  
	}   
	  
	return 0;  
}   