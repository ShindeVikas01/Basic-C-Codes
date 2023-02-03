// Calculate 5 subject percentage and grade calculation as per persentage
#include<stdio.h>
int main()
{
	int mar,eng,his,geo,math;
	float total=0.0,per=0.0;
	
	//Get markes from user
	printf("Enter Marathi Marks=");
	scanf("%d",&mar);
	printf("Enter English Marks=");
	scanf("%d",&eng);
	printf("Enter History Marks=");
	scanf("%d",&his);
	printf("Enter Geography Marks=");
	scanf("%d",&geo);
	printf("Enter Maths Marks=");
	scanf("%d",&math);
	
	//Calculate marks total and student percentage
	total=mar+eng+his+geo+math;	
	per=total/5;
	
	//Display total marks and Persontage
	printf("\n Total Marks=%.2f",total);
	printf("\n Student Percentage=%.2f",per);
	
	//AS per Percentage find Student Grade
	if(per>=35 && per<55)
	{
		printf("\n The student has a D grade.");
	}
	else if(per>=55 && per<65)
	{
		printf("\n The student has a C grade.");
	}
	else if(per>=65 && per<75)
	{
		printf("\n The student has a B grade.");
	}
	else if(per>=75 && per<85)
	{
		printf("\n The student has a A grade.");
	}
	else if(per>=85 && per<=100)
	{
		printf("\n The student has a A+ grade.");
	}
	else
	{
		printf("\nThe student has failed");
	}
	return 0;
}