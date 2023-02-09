// Desing menu card using do while case and calculate customer discount and net bill amount.
#include<stdio.h>
int main()
{
	int choise,qty,bill=0;
	float disval=0.0,netval=0.0;
	char sel='n';
	
	do
	{
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
		printf("\nOrder anyother y-Yes or n-No=");
		scanf("%s",&sel);
	}while(sel=='y');
	
	return 0;
}