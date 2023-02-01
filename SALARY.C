/* Employee in hand salary and tax calculation*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float perday,days,salary,tax,inhand;
	clrscr();
	printf("Enter the Perday salary==>>");
	scanf("%f",&perday);
	printf("\nEnter Number Days Present==>>");
	scanf("%f",&days);
	salary=perday*days;
	printf("\nSalary of employee==>>%f",salary);
	tax=(salary*0.12);
	printf("\nEmployee Tax==>>%f",tax);
	inhand=salary-tax;
	printf("\n\nEmplyee In hand Salary is %f",inhand);
	getch();
}
