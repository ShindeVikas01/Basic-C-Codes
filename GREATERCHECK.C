#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,num3;
	clrscr();

	printf("Enter 3 Numbers\n");
	printf("1.Number=");
	scanf("%d",&num1);
	printf("2.Number=");
	scanf("%d",&num2);
	printf("3.Number=");
	scanf("%d",&num3);

	if(num1!=num2 && num1!=num3 && num2!=num3)
	{
		if(num1>num2 && num1>num3)
		{
			printf("\nFirst number is Greater");
		}
		else if(num2>num3 && num2>num1)
		{
			printf("\nSecond number is Greater");
		}
		else if(num3>num1 && num3>num2)
		{
			printf("\nThird number is Greater");
		}
	}
	else if(num1==num2 && num1!=num3)
	{
		if(num1>num3)
		{
			printf("\n First and Second numbers are Equal and Greater");
		}
		else
		{
			printf("\n Third number is Greater");
		}
	}
	else if(num1==num3 && num2!=num3)
	{
		if(num3>num2)
		{
			printf("\n First and Third numbers are Equal and Greater");
		}
		else
		{
			printf("\n Second number is Greater");
		}
	}
	else if(num3==num2 && num2!=num1)
	{
		if(num2>num1)
		{
			printf("\n Second and Third numbers are Equal and Greater");
		}
		else
		{
			printf("\n First number is Greater");
		}
	}
	else
	{
		printf("\n All numbers are Equal");
	}
	getch();
}