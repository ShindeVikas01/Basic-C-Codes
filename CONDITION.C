/*Greater number between 2 numbers using condition statement */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter 2 number\n");
	scanf("%d\n%d",&a,&b);
	if(a>b)
	{
		printf("A is grater than B");
	}
	else
	{
		printf("B is grater than A");
	}
	getch();
}