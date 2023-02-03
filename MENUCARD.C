// Giving order number take the quantity as input and calculate the bill as per the price of items
#include<stdio.h>
int main()
{
	int sel,qty,bill;
	
	//Diplay menu and select user menu
	printf(" MENU:\n 1. Tea\t\t\t15/-Rs.\n 2. Coffee\t\t20/-Rs.\n 3. Cold Coffee\t\t30/-Rs.\n 4. Exit");
	printf("\n\n Select Menu Using Number=");
	scanf("%d",&sel);

	//Add quantity and diplay orderand order billing
	if(sel==1 || sel==2 || sel==3 || sel==4)
	{
		printf("\n Enter Number Of Quantity=");
		scanf("%d",&qty);
		if(sel==1)
		{
			bill= qty*15;
			printf("\n Enjoy your Tea and paid %d/-Rs.",bill);
		}
		else if(sel==2)
		{
			bill= qty*20;
			printf("\n Enjoy your Coffee and paid %d/-Rs.",bill);
		}
		else if(sel==3)
		{
			bill= qty*30;
			printf("\n Enjoy your Cold Coffee and paid %d/-Rs.",bill);
		}
		else if(sel==4)
		{
			printf("\n Thank you Visit Again");
		}
	}
	else
	{
		printf("\n Invalid Selection");
	}
	return 0;
}