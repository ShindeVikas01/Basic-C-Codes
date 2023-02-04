// Desing calculater using switch case
#include<stdio.h>
int main()
{
	char choise='m';
	float num1,num2,calculate=0.0;
	
	//Diplay menu and select user menu
	printf("****Mathematical Symbols****");
	printf("\n +");
	printf("\n -");
	printf("\n *");
	printf("\n /");
	printf("\n\n Select Symbol =");
	scanf("%c",&choise);
	if(choise=='+' || choise=='-'|| choise=='*' || choise=='/')
	{
		printf("\n\n Enter 1st Number=");
		scanf("%f",&num1);
		printf("\n Enter 1st Number=");
		scanf("%f",&num2);
	}
	
	switch(choise)
	{
		case '+': calculate=num1+num2;
				  printf("\n Calculation=%.2f",calculate);
				  break;
				  
		case '-': calculate=num1-num2;
				  printf("\n Calculation=%.2f",calculate);
				  break;
				  
		case '*': calculate=num1*num2;
				  printf("\n Calculation=%.2f",calculate);
				  break;
				  
		case '/': calculate=num1/num2;
				  printf("\n Calculation=%.2f",calculate);
				  break;
				  
		default : printf("\n Invalid Selection");
				  break;
	}
	
	return 0;
}
