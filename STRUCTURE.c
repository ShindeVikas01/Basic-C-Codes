/*C program to print employee's record using structure*/
 
#include <stdio.h>
 void input();
 void output();
/*structure declaration*/
struct employee{
	int     empId;
    char    name[30];
    float   salary;
};
/*declare structure variable*/
    struct employee emp[2];
    
 
int main()
{
    input();
    output();
    return 0;
}

void input()
{
	/*input employee details*/
	int i;
	printf("\nEnter Emplyee details :\n");
	for(i=0;i<=2;i++)
	{
		printf("Emplyee Name:");          
		scanf("%s",&emp[i].name);
	    printf("Emplyee ID :");            
		scanf("%d",&emp[i].empId);
	    printf("Salary :");        
		scanf("%f",&emp[i].salary);
	}
}

void output()
{
	/*print employee details*/
	int i;
	float totalsalary=0.0;
	printf("\n\nEntered detail is:");
	printf("\n  ID \tNAME \tSALARY");
	for(i=0;i<=2;i++)
	{
		printf("\n %d \t%s \t%.2f",emp[i].empId,emp[i].name,emp[i].salary);
		totalsalary+=emp[i].salary;
	}
	printf("\n---------------------------");
	printf("\n\tTotal = %0.2f",totalsalary);
}


/*
Enter Emplyee details :
Emplyee Name:Raman
Emplyee ID :121
Salary :54563.654
Emplyee Name:Aryan
Emplyee ID :122
Salary :65456.698
Emplyee Name:Riyan
Emplyee ID :123
Salary :65893.654


Entered detail is:
  ID    NAME    SALARY
 121    Raman   54563.65
 122    Aryan   65456.70
 123    Riyan   65893.66
---------------------------
        Total = 185914.00*/
