// Find even number added in a array
#include<stdio.h>
int main()
{
	int i,a[5],num;
	
	//Get array values from user
	printf("Enter The Number In Array=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEven Numbers present in array is");
	
	//calculation to find even number form array
	for(i=0;i<5;i++)
	{
		num=a[i]%2;
		if(num==0)
		{
			printf("\n\t%d",a[i]);
		}
	}
	
	return 0;
}