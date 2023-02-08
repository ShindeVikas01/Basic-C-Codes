//Reverse a number in c using while loop

#include<stdio.h>
int main()
{
	int num,rnum,reverse=0;
	
	// Get number form user
	printf("Enter a number:");    
  	scanf("%d", &num);  
  	
  	//Calculation for reverse number
  	while(num>0)
  	{
  		rnum=num%10;
  		reverse=reverse*10+rnum; 
		num=num/10;
	}
	printf("Reverse number is=%d",reverse);	
	return 0;
}