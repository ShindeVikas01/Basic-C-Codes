// DEsing menu card using switch case and calculate customer discount and net bill amount.
#include<stdio.h>
int main()
{
	int choise,qty,bill=0;
	float disval=0.0,netval=0.0;
	
	//Diplay menu and select user menu
	printf("****MENU****");
	printf("\n 1. Tea\t\t\t15/-Rs.");
	printf("\n 2. Coffee\t\t20/-Rs.");
	printf("\n 3. Cold Coffee\t\t30/-Rs.");
	printf("\n 4. Exit");
	printf("\n\n Select Menu Using Number=");
	scanf("%d",&choise);
	if(choise>=1 && choise<=4)
	{	
		printf("\n Enter Number Of Quantity=");
		scanf("%d",&qty);
	}
	switch(choise)
	{
		case 1: bill= qty*15;
				printf("\n Enjoy your Tea and bill amount is %d/-Rs.",bill);
				break;
		
		case 2: bill= qty*20;
				printf("\n Enjoy your Coffee and bill amount is %d/-Rs.",bill);
				break;
				
		case 3: bill= qty*30;
				printf("\n Enjoy your Cold Coffee and bill amount is %d/-Rs.",bill);
				break;
				
		case 4: printf("\n BYE BYE...............");
				printf("\n Thank you Visit Again");
				break;
			
		default : printf("\n Invalid Selection");
				  break;
	}
	
	// Calculate disscount on bill amount
	if(bill !=0)
	{
			if(bill>=200)
			{
				disval=bill*0.1;
				netval=bill-disval;
				printf("\n\n Hello, Your are eligible for disscount");
				printf("\n Dissount=%.2f",disval);
				printf("\n Pay Bill=%.2f",netval);
				printf("\n BYE BYE...............");
				printf("\n Thank you Visit Again");	
			} 
			else
			{
				printf("\n Sorry You are not eligible for disscount");
				printf("\n Pay Bill=%.2f",bill);
				printf("\n BYE BYE...............");
				printf("\n Thank you Visit Again");	
			}
	}
	

	return 0;
}