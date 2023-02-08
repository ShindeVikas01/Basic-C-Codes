// Given number is prime or not

#include<stdio.h>
int main()
{
	int i,num,flag=1;
	
	// Enter number upto find prime number
	printf("Enter number =");
	scanf("%d",&num);
	
	if(num == 1 || num == 2)
	{
		flag=1;
	}
	else
	{
		for(i = 2; i <= num-1; i++)
		{
			if(num%i == 0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("\nNumber is Prime");
	}
	else
	{
		printf("\nNumber is Not Prime");
	}
}