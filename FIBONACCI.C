//the fibonacci series program in c

#include<stdio.h>
int main()
{
	int num1=0,num2=1,num3,i,number;
	
	//get level form user
	printf("Enter the number of level:");    
	scanf("%d",&number); 

	for(i=2;i<number;i++)
	{    
		  num3=num1+num2;    
		  printf("\n%d",num3);    
		  num1=num2;    
		  num2=num3;    
	}  
	return 0;
	
}