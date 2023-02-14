//  Program 3x3matrix is diagnoal matrix or not.

#include<stdio.h>
int main()
{
	int a[3][3],r,c,flag=0;
	
	// add element from user
	printf("Enter 3x3 matrix element\n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			printf("a[%d][%d]=",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("\nDisplay 3x3 matrix=\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\t%d",a[r][c]);
		}
		printf("\n");
	}
	
	 for (r = 0; r < 3; r++) 
	{
        for (c = 0; c < 3; c++) 
		{
            if (r != c && a[r][c] != 0) 
			{
                flag = 1;
                break;
            }
        }
    }

	 /* printing the result */
    if (flag)
	{
        printf("\nMatrix is not a diagonal matrix!!\n");
    } 
	else 
	{
        printf("\nMatrix is a diagonal matrix!!\n");
    }
	
	return 0;
}