// Find Number of charachter present in string

#include<stdio.h>
int main()
{
	char a, str[10];
    int i, num = 0, flag = 0;
 
    printf("Enter character:");
    scanf("%c", &a);
    printf("\n\nNow enter the string:");
    scanf("%s", str);
    printf("\n\nPositions of '%c' in %s are:", a, str);
    for (i = 0; i < 10; i++)
    {
        if (str[i] == a)
        {
            flag = 1;
            printf("%d",i+1);
            num++;
        }
    }
    if (flag)
    {
        printf("\nCharacter '%c' is present for %d times.\n", a, num);
    }
    else
    {
        printf("\nCharacter is not present in given string.\n");
    }
   	
	return 0;
}