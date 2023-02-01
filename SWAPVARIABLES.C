/* Swap two number using 3 variable or 2 varivable */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter 1st Number=");
	scanf("%d",&a);
	printf("Enter 2nd Number=");
	scanf("%d",&b);
	/*c=b;
	b=a;
	a=c;  */
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n1st Number is=%d",a);
	printf("\n2nd Number is=%d",b);
	getch();
}