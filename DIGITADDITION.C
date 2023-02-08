//Addition of all digit present in given number

#include<stdio.h>
int main()
{
	int num,rnum,sum=0;
	
	// Get number form user
	printf("Enter a number:");    
  	scanf("%d", &num);  
  	
  	//Calculation for number's digit
  	while(num>0)
  	{
  		rnum=num%10;
  		sum=sum+rnum; 
		num=num/10;
	}
	printf("Addition of number is %d",sum);	
	return 0;
}