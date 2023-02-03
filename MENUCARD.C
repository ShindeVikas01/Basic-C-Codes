// design menu card using ladder if else loop 
#include<stdio.h>
int main()
{
	int sel;
	
	//Diplay menu and select user menu
	printf(" MENU:\n 1. Coffee\n 2. Tea\n 3. Cold Coffee\n 4. Exit");
	printf("\n\n Select Menu Using Number=");
	scanf("%d",&sel);
	
	//Diplay order and price
	if(sel==1)
	{
		printf("\n Enjoy your Coffee and paid 20/-Rs.");
	}
	else if(sel==2)
	{
		printf("\n Enjoy your Tee and paid 15/-Rs.");
	}
	else if(sel==3)
	{
		printf("\n Enjoy your Cold Coffee and paid 30/-Rs.");
	}
	else if(sel==3)
	{
		printf("\n Enjoy your Cold Coffee and paid 30/-Rs.");
	}
	else if(sel==3)
	{
		printf("\n Thank you for Visit");
	}
	else
	{
		printf("\n Invalid Selection");
	}
	return 0;
}