//Search any number from array
#include<stdio.h>
int main()
{
	int i,num,flag=0,a[5];
	
	//Get array values from user
	printf("Enter The Number In Array=\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter number to search from array=");
	scanf("%d",&num);
	
	//Search number operation
	for(i=0;i<5;i++)
	{
		if(num==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nNumber is present in array.");
	}
	else
	{
		printf("\nNumber is not present in array.");
	}
	return 0;
}