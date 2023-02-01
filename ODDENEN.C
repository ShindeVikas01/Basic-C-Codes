/* User enter number is odd or even using condition statment */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter Number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
	getch();
}