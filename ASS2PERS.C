/* Student personatage calculation*/
#include<stdio.h>
#include<conio.h>
void main()
{
	 float per;
	 int a,b,c,d,e,total;
	 clrscr();
	 printf("Enter Sub marks:-\n");
	 scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
	 total=a+b+c+d+e;
	 per=(float)total/5;
	 printf("Total Persontage==>>%f",per);
	 getch();
}
