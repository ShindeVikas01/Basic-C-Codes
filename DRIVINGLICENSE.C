#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	char gender;
	clrscr();
	printf("\nEnter Client Gender(m/f)=");
	scanf("%c",&gender);
	printf("\nEnter Client Age=");
	scanf("%d",&age);

	if( gender=='m')
	{
		if( age>=18)
		{
			printf("\nMale client is valid for driving");
		}
		else
		{
			printf("\nMale client is not valid for driving");
		}
	}
	else
	{
		  if( age>=22)
		{
			printf("\nFemale client is valid for driving");
		}
		else
		{
			printf("\nFemale clent is not valid for driving");
		}
	}
	getch();
}
